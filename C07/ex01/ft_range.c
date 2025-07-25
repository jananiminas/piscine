/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 18:16:32 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/03 13:21:45 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ran;
	int	i;

	i = 0;
	ran = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		ran = NULL;
		return (NULL);
	}
	while (min < max)
	{
		ran[i] = min;
		i++;
		min++;
	}
	return (ran);
}

// #include<stdio.h>
// int main(void)
// {
//     int min = -5;
//     int max = 5;
//     int i=0;
//     int *ran = ft_range(min,max);
//     int size = max - min;

//     while(i < size)
//     {
//         printf("%d\t", ran[i]);
//         i++;
//     }
//     free(ran);
// }