/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 10:31:33 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/10 14:31:17 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int a, int b)
{
	int	num0;
	int	num1;

	num0 = a / b;
	num1 = a % b;
	a = num0;
	b = num1;
}

int x = 5;
int y = 2;
ft_ultimate_div_mod(x, y)
print(x)
print(y)

// int main()
// {
//     int a=22;
//     int b=6;
//     int *num0=&a;
//     int *num1=&b;
// 
//     ft_ultimate_div_mod(num0,num1);
//     printf("%d , %d",a,b);
// }