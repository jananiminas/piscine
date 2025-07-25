/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:09:37 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/24 17:37:15 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
//     printf("%d\n",ft_str_is_printable("1452gg"));
//     printf("%d\n",ft_str_is_printable("\n"));
//     printf("%d\n",ft_str_is_printable(""));
// }