/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:57:44 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 14:56:43 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char		*tmp;
	const char	*s;

	if (dest <= src)
	{
		tmp = dest;
		s = src;
		while (num--)
			*tmp++ = *s++;
	}
	else
	{
		tmp = dest;
		tmp += num;
		s = src;
		s += num;
		while (num--)
			*--tmp = *--s;
	}
	return (dest);
}
