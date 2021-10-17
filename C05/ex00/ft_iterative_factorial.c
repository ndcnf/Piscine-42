/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:13:19 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/24 10:12:37 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	b;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	b = 1;
	while (i <= nb)
	{
		b = b * i;
		i++;
	}
	return (b);
}
