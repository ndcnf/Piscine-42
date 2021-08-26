/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:38:16 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/26 15:34:46 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	m;

	i = 0;
	if (argc != 3)
		ft_putchar('\n');
	while ((argv[1][i] || argv[2][i]) && m < 26)
	{
		

		i++;
	}
}
