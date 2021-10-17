/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:11:24 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/25 13:11:55 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while ((--i) >= 0)
		ft_putchar(str[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
		rev_print(&argv[1][i]);
	return (0);
}
