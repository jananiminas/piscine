 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:09:31 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/25 17:54:01 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[++a];
		++a;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include<string.h>

// int	main(void)
// {
// 	char dest[30] = "well";
// 	char src[] = " " "done";

// 	printf("%s", ft_strcat(dest, src));
// }