/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aauquier <aauquier@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:40:38 by aauquier          #+#    #+#             */
/*   Updated: 2021/08/20 11:24:48 by aauquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//TODO change this include!
#include "../ex04/ft_stock_str.h"

void	ft_putstr(char *str, int nl);
void	ft_puti(int n);

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str)
	{
		ft_putstr((*par).str, 0);
		ft_puti((*par).size);
		ft_putstr((*par).copy, 1);
		par++;
	}
}

void	ft_putstr(char *str, int nl)
{
	if (nl)
		write(1, "\n", 1);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_puti(int n)
{
	int		mod;
	char	c;

	if (n / 10)
		ft_puti(n / 10);
	else if (n < 0)
		write(1, "-", 1);
	mod = n % 10;
	if (mod < 0)
		mod *= -1;
	c = '0' + mod;
	write(1, &c, 1);
}
