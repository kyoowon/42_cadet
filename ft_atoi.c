/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:08:25 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/17 16:45:41 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** factor - nptr : String to replace with number  / return - int type nub
** function - Replace a numeric string with a number
*/

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	sign = 0;
	if (!nptr)
		return (0);
	while (nptr[i] && (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -1;
	nbr = 0;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
		nbr = (nbr * 10) + nptr[i++] - '0';
	if (i + sign >= 20)
		return (sign > 0 ? -1 : 0);
	return (nbr * sign);
}
