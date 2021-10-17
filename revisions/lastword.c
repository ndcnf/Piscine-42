/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:46:09 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/25 13:33:52 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_lastword(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while ((str[i] == ' ') || (str[i] == '\0'))
		i--;
	while (str[i] >= 33 && str[i] <= 122 && i != 0)
		i--;
	while (str[i])
	{
		if (str[i] != ' ')
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	if (argc == 2)
		ft_lastword(argv[1]);
	ft_putchar('\n');
	return (0);
}
