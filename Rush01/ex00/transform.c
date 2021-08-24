/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:11:16 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/14 17:15:49 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*chartoint(char *str)
{
	int	i;
	int	j;
	int	*args;

	args = malloc(16);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != 32)
		{
			args[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (args);
}
