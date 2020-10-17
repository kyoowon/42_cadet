/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:34:31 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/16 20:45:34 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** factor - c : char  / return - int
** function - Replace lowercase letters with upper case letters
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
