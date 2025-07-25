/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:48:40 by jaa-s             #+#    #+#             */
/*   Updated: 2025/04/25 18:38:31 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include<stdio.h>
// int main (void)
// {
// 	char src[] = "good luck";
//     char dest[20];
// 	ft_strncpy(dest, src,3);
//     printf("%s\n", src);
// 	printf("%s", dest);
//     return (0);
// }