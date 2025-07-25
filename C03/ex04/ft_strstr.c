/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:39:42 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/10 14:19:05 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (to_find[i] != '\0' && str[i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	char *str = "good going";
// 	char *to_find = "going";

//     ft_strstr(str,to_find);
// 	printf("%s\n", ft_strstr(str,to_find));
// }