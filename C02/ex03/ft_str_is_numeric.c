/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:11:38 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/24 17:29:15 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include<stdio.h>
// int main (void)
// {
// 	printf("%d\n",ft_str_is_numeric("14523g"));
// 	printf("%d\n",ft_str_is_numeric("95678"));
// 	printf("%d\n",ft_str_is_numeric("33 90"));
//     printf("%d\n",ft_str_is_numeric(""));
// }