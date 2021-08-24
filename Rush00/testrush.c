/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:13:23 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/08 17:39:19 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_inter_line (int x);
void	ft_first_last_line (int x);

void	rush (char x, char y)
{
	int	nb_line_inter;

	nb_line_inter = y - 2;
	ft_first_last_line(x);
	ft_putchar('\n');
	while (nb_line_inter > 1)
	{
		ft_inter_line(x);
		ft_first_last_line(x);
		ft_putchar('\n');
		nb_line_inter--;
	}
}

void	ft_inter_line (int x)
{
	int	i;

	i = 1;
	while (i >= 0)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}	

void	ft_first_last_line (int x)
{
	int	i;

	i = 1;
	while (i >= 0)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else if (i > 0 && i < x)
		{
			ft_putchar('-');
		}
		i++;
	}
}
