/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:17:06 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/24 10:07:38 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb < 0)
		return (0);
	while ((i <= 46341) && (nb != (i * i)))
		i++;
	if (nb % i != 0)
		return (0);
	return (i);
}
