/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:37:03 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 16:12:12 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t num)
{
	size_t ret;
	size_t len;

	ret = ft_strlen(src);
	if (num)
	{
		len = (ret >= num) ? num - 1 : ret;
		ft_memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return (ret);
}
