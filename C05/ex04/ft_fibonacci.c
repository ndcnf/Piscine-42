/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:26:17 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/24 10:15:24 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Fibonacci : 0	1	2	3	4	5	6	7	8	9	...
				0	1	1	2	3	5	8	13	21	34	...

	On additionne toujours le nombre precedent avec son precedent.
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
