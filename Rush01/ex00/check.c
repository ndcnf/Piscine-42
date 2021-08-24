/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:19:49 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/14 17:13:55 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_puterror(void);

int	argscheck(char *args)
{
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (args[++i])
	{
		if (args[i] != 32)
			j++;
	}
	if (j > 16 || j < 16 || i != 31)
	{
		ft_puterror();
		return (1);
	}
	i = -1;
	while (args[++i])
	{
		if (!((args[i] >= '1' && args[i] <= '4') || args[i] == ' '))
		{
			ft_puterror();
			return (1);
		}
	}
	return (0);
}

void	ft_puterror(void)
{
	write(1, "Error\n", 6);
}
