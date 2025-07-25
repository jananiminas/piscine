/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:32:56 by analves-          #+#    #+#             */
/*   Updated: 2025/07/24 18:30:55 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && x != 1 && y != 1))
				ft_putchar('A');
			else if ((j == x && i == 1) || (j == 1 && i == y))
				ft_putchar('C');
			else if (!(j > 1 && j < x) || !(i > 1 && i < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
