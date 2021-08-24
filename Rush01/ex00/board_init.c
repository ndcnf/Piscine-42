/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:45:19 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/15 18:45:21 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_init(char *str, int size)
{
	char	**board;
	int		x;
	int		y;

	// Allocating memory for the board - First dimension - 4 * sizeof(char *)
	board = malloc(size * sizeof(char *));
	y = -1;
	while (++y < size)
	{
		// Allocating memory for the board - Second dimension - (4 + 4) * sizeof(char)
		board[y] = malloc((size + 4) * sizeof(char));
		x = -1;
		// 0 0 0 0
		// 0 0 0 0
		// 0 0 0 0
		// 0 0 0 0
		while (++x < size)
			board[y][x] = 0;
		x = -1;
		while (++x < 4)
		{
			// Get first arg for each row - UP | DOWN | LEFT | RIGHT
			board[y][size + x] = str[2 * (y + x * size)] - '0';
			printf("str[%d]: %d\n", 2 * (y + x * size), str[2 * (y + x * size)] - '0');
		}
	}
	// 0 0 0 0 4 1 4 1
	// 0 0 0 0 3 2 3 2
	// 0 0 0 0 2 2 2 2
	// 0 0 0 0 1 2 1 2
	return (board);
}
