/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:46:46 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/09 11:12:43 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_first_last(int x);
void	ft_inbetween(int x);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	inbetween_line;

	inbetween_line = y - 2;
	if (x > 0 && y > 0)
	{
		ft_first_last(x);
		ft_putchar('\n');
		while (inbetween_line > 0)
		{
			ft_inbetween(x);
			ft_putchar('\n');
			inbetween_line--;
		}
		if (y > 1)
		{
			ft_first_last(x);
			ft_putchar('\n');
		}
	}
}

void	ft_first_last(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	ft_inbetween(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}
