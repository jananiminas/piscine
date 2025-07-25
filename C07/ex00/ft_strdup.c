/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:29:35 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/03 13:19:29 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (src[l])
		l++;
	dup = (char *)malloc(sizeof(char) * (l + 1));
	if (dup == NULL)
		return (NULL);
	while (i < l)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *dup = ft_strdup("wellgoing");
// 	printf("%s", dup);
// 	free(dup);
// }