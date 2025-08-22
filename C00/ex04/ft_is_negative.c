/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:17:33 by jaa-s	           #+#    #+#             */
/*   Updated: 2025/05/10 14:11:04 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, , 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-15);
// 	write(1, "\n", 1);
// 	ft_is_negative(34);
// 	write(1, "\n", 1);
// 	ft_is_negative(-2);
// 	write(1, "\n", 1);
// 	ft_is_negative(0);
// 	write(1, "\n", 1);
// 	ft_is_negative(' ');
// 	return (0);
// }
