/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:14:38 by jaa-s             #+#    #+#             */
/*   Updated: 2025/05/06 18:14:47 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}					t_stock_str;
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
#endif
