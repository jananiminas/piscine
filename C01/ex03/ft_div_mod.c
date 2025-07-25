/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:48:00 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/21 12:47:03 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
//     int a=15;
//     int b=2;
//     int div;
//     int mod;

//     ft_div_mod(a, b, &div, &mod);
//     printf("division = %d\n", div);
//     printf("modulus = %d\n", mod);
// }