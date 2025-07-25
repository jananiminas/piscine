/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:20:14 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/03 14:57:27 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		*range = arr;
		return (i);
	}
	else
		return (-1);
}

// #include<stdio.h>
// int main(void)
// {
//     int min = 0;
//     int max = 0;
//     int i=0;
//     int *arr;
//     int size = ft_ultimate_range(&arr,min,max);

// 		printf("ransi %d\n",size);
//     while(i < size)
//     {
//         printf("%d\t", arr[i]);
//         i++;
//     }
//     free(arr);
// }