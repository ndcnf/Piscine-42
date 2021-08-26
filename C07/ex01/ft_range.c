/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 07:01:13 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/26 08:54:30 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = NULL;
	array = malloc(sizeof(int) * (max - min));
	if (min >= max || array == NULL)
		return (NULL);
	while (i >= min && i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
