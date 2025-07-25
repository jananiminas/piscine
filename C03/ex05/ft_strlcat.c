/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:57:43 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/26 12:15:24 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	h;

	h = 0;
	while (str[h] != '\0')
	{
		h++;
	}
	return (h);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	if (size <= dest_len || size == 0)
	{
		return (size + src_len);
	}
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	char *str = "good going";
// 	char *dest ="going";

// 	printf("%d\n", ft_strlcat(str,dest,10));
// }
