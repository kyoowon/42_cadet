/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:08:25 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 18:17:14 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	sign = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 || str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign++;
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * sign);
}
