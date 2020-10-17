/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:37:03 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/17 19:43:42 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t ret;
	size_t len;

	if (!dest || !src)
		return (0);
	ret = ft_strlen(src);
	if (size)
	{
		len = (ret >= size) ? size - 1 : ret;
		ft_memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return (ret);
}
