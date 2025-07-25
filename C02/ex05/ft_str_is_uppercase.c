/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:17:24 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/24 17:37:04 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
//     printf("%d\n",ft_str_is_uppercase("NBVZXC3"));
//     printf("%d\n",ft_str_is_uppercase("lkjh"));
//     printf("%d\n",ft_str_is_uppercase("WERTY"));
//     printf("%d\n",ft_str_is_uppercase(""));
// }