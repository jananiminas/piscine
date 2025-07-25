/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:40:04 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/10 14:14:23 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
//     printf("%d\n",ft_strncmp("welldone","well123",0));
//     printf("%d\n",ft_strncmp("well","well",4));
//     printf("%d\n",ft_strncmp("welldone","well123",8));
// }