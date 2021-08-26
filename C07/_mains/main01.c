/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:36:13 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/26 08:52:27 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
#include "../ex01/ft_range.c"

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}	
}

int	main (int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 3)
	{
		while (argv[i])
		{
			ft_range(argv[i][1], argv[i][2]);
			printf("argvi1 : %d, argv i2 : %d\n", argv[i][1], argv[i][2]);
			i++;
		}	
	}
	ft_putchar('\n');
	return 0;
}
