/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aauquier <aauquier@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:16:02 by aauquier          #+#    #+#             */
/*   Updated: 2021/08/20 14:47:59 by aauquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_str_to_stock(char *str, t_stock_str *stock);

/*
 * It's about time! ◔_◔
 */
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	res = malloc(sizeof(*res) * (ac + 1));
	if (!res)
		return (0);
	i = -1;
	while (++i < ac)
		if (!ft_str_to_stock(av[i], &res[i]))
			return (0);
	res[i].str = 0;
	return (res);
}

int	ft_str_to_stock(char *str, t_stock_str *stock)
{
	int		size;
	int		i;

	size = 0;
	i = -1;
	while (str[++i])
		size++;
	(*stock).size = size;
	(*stock).str = str;
	(*stock).copy = malloc(sizeof(char) * (size + 1));
	if (!(*stock).copy)
		return (0);
	i = -1;
	while (str[++i])
		(*stock).copy[i] = str[i];
	(*stock).copy[i] = 0;
	return (1);
}
