/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:40:46 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/05 16:01:02 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (i < power)
	{
		result = (result * nb);
		i++;
	}
	return (result);
}

// int main(void)
// {
// 	printf("r:%d", ft_iterative_power(5, 2));
// 	return (0);
// }