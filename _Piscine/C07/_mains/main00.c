/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:36:13 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/26 07:06:07 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
#include "../ex00/ft_strdup.c"

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
	if (argc == 2)
	{
		while (argv[i])
		{	
			ft_putstr(ft_strdup(argv[i]));
			i++;
		}	
	}
	ft_putchar('\n');
	return 0;
}
