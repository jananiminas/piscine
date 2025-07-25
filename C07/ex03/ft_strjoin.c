/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:06:13 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/04 13:24:07 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_allenghts(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	char	*together;

	sum = 0;
	i = 0;
	if (size <= 0)
		sum = 1;
	else
	{
		while (i < size)
		{
			sum += ft_strlen(strs[i]);
			i++;
		}
		sum += ft_strlen(sep) * size - 1;
	}
	together = (char *)malloc(sizeof(char) * sum);
	if (together == NULL)
		return (0);
	return (together);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*together;

	i = 0;
	c = 0;
	together = ft_allenghts(size, strs, sep);
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			together[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			together[c++] = sep[j++];
		}
		i++;
	}
	together[c] = '\0';
	return (together);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*strs[] = {"minnu", "allu", "ponnu"};
// 	int		size = 3;
// 	char	*sep = " ";
// 	int		i = 0;
// 	char	*together = ft_strjoin(size, strs, sep);
// 	while (i < size)
// 	{
// 		printf("%d: %s\n", i, strs[i]);
// 		i++;
// 	}
// 	printf("%s\n", together);
// 	free(together);
// }
