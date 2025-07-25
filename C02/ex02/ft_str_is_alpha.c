/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:39:03 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/24 17:29:06 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>
// int main (void)
// {
// 	printf("%d\n",ft_str_is_alpha("good123"));
// 	printf("%d\n",ft_str_is_alpha("goodluck"));
// 	printf("%d\n",ft_str_is_alpha("good luck"));
// }