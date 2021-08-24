/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:21:41 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/14 16:35:21 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_puterror(void);
int		argscheck(char *args);
int		*chartoint(char *str);
int		**ft_placement(int row, int *borders, int cell);
void    ft_printboard(int **board);

int	main(int argc, char **argv)
{
	int	flag;
	int	*args;
	int	i;
	int	**board;
	
	args = malloc(16);
	i = 0;
	flag = 0;
	if (argc != 2)
	{
		ft_puterror();
		return (0);
	}
	flag = argscheck(argv[1]);
	if (flag == 0)
	{
		args = chartoint(argv[1]);
	}
	board = ft_placement(0, args, 1);
	ft_printboard(board);
	return (0);
}
