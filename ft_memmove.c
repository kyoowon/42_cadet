/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:57:44 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/06 13:59:42 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char		*tmp;
	const char	*sptr;

	if (dest <= src)
	{
		tmp = dest;
		sptr = src;
		while (num--)
			*tmp++ = *sptr++;
	}
	else
	{
		tmp = dest;
		tmp += num;
		sptr = src;
		sptr += num;
		while (num--)
			*--tmp = *--sptr;
	}
	return (dest);
}
