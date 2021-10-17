/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:44:54 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/15 18:44:55 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free(char **board, int size)
{
	// Free memory but maybe a mistake - (size + 4)
	while (size--)
		free(board[size]);
	free(board);
}
