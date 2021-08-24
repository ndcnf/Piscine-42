/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:34:13 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/19 23:39:12 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i= 0;
	while (str[i] != '0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	operator;

	i = 0;
	if (str[i] 

//REPRENDRE ICI.
//GERER LES OPERATEURS ET LES COMPTER (AVANT ET APRES ?)
//MODULO 2 POUR PAIR/IMPAIR : PAIR+/IMPAIR-
//result = result * 10 + str[i] - 'o';
//POUR LA TRANSFORMATION EN INTEGER
//POUR LE SIGNE, FAIRE UN SIMPLE IF

	if(!('\t' || '\n' || '\v' || '\f' || '\r' || ''))
		while (str[i] != '\0')
		{
			str[i] = 127;
			i++;
		}	
}
