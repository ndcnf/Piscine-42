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
int		ft_argscheck(char *args);
char	**ft_init(char *borders, int size);
void	ft_printboard(char **board, int size);
int		ft_run(char **board, int size);
int		ft_get_size(char *str);
void	ft_free(char **board, int size);

int	main(int argc, char **argv)
{
	int		flag;
	char	**board;
	int		size;

	//size == 4
	size = ft_get_size(argv[1]);
	flag = 0;
	if (argc != 2)
	{
		ft_puterror();
		return (0);
	}
	flag = ft_argscheck(argv[1]);
	if (flag == 0)
	{
		// Initializing board
		board = ft_init(argv[1], size);
		if (ft_run(board, size))
			// Print resolved board
			ft_printboard(board, size);
		else
			ft_puterror();
		// Free memory
		ft_free(board, size);
	}
	return (0);
}
