/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:01:05 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/10 14:18:03 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0' && a < nb)
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include<string.h>

// int	main(void)
// {
// 	char dest[50] = "good";
// 	char src[] = "going";

// 	printf("%s", ft_strncat(dest, src,2));
// }