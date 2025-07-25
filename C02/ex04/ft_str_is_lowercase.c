/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:01:56 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/24 17:38:13 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
//     printf("%d\n",ft_str_is_lowercase("gafgh dfghj"));
//     printf("%d\n",ft_str_is_lowercase("qwert"));
//     printf("%d\n",ft_str_is_lowercase("ASDFGH"));
//     printf("%d\n",ft_str_is_lowercase(""));
// }