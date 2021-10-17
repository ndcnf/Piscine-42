/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:34:28 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/26 13:59:44 by nchennaf         ###   ########.fr       */
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
	int	pos;

	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	pos = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			pos = (argv[1][i] - 96);
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			pos = (argv[1][i] - 64);
		while (pos >= 1)
		{
			ft_putchar(argv[1][i]);
			pos--;
		}
		i++;
	}
	ft_putchar('\n');
	return 0;
}
