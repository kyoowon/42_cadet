/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:19:41 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 16:34:37 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t num)
{
	const void *dstptr;

	dstptr = dest;
	if (!dest && !src)
		return (NULL);
	while (num--)
		*((unsigned char *)dest++) = *((unsigned char *)src++);
	return ((void *)dstptr);
}
