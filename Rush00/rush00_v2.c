/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:13:23 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/10 15:27:12 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char);

void	rush(int x, int y)
{
	int	X;
	int	Y;

	X = 1;
	Y = 1;
	while (Y <= y)
	{
		while (X <= x)
		{
			if ((X == 1 && Y == 1) || (Y == 1 && X == x) || (X == 1 && Y == y) || (X == x && Y == y))
				ft_putchar('o');
			else if (X > 1 && Y == y || Y == 1)
				ft_putchar('-');
			else if ((Y > 1 && Y < X) || (Y<y && Y > 1)) 
				ft_putchar('|');
			else
				ft_putchar(' ');
			X++;
		}

		X = 1;
		Y++;
		ft_putchar('\n');
	}
}
