/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:09:43 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/14 18:57:12 by vvermot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_check(int *borders, int **board);

int	**ft_placement(int row, int *borders, int cell)
{
	int	**board;
	int i;
	int	j;
	int	k;

	k = 0;
	i = -1;
	j = 0;
	
	board = (int **)malloc(4 * sizeof(int *));
    while (++i < 4)
         board[i] = (int *)malloc(4 * sizeof(int));

	while (cell <= 16)
	{
		if (ft_check(borders, board))
		{
			if (cell == 16)
			{
				return (board);
			}

			else
			{
				ft_placement(row, borders, ++cell);
			}
		}
	}
	printf("Oups\n");
	free(board);
	return (board);
}

int	ft_check(int *borders, int **board)
{
	int	x;
	int	y;
	int	arg_x;
	int arg_y;
	int	num;
	int	*tmp;
	int	i;

	tmp = borders;
	num = 1;
	arg_x = 0;
	arg_y = 0;
	x = 0;
	y = 0;
	i = 1;
	while (y < 4)
	{
		while (x < 4)
		{
			if (num > 4)
				num = 1;
			if (board[y][x] != num)
				board[y][x] = num;
			if (y != 0)
			{
				while (i <= y && (board[y][x - 1] == num || board[y - 1][x] == num))
				{
					if (num >= 4)
						num = 1;
					if (board[y - i][x] == num)
						board[y][x] = ++num;
					i++;
				}
				i = 1;
			}
			num++;
			x++;
		}
		x = 0;
		num = 1;
		y++;
	}
	return (1);
}
