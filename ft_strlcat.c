/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:05:52 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/05 22:12:24 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t dst_len;
	size_t src_len;
	size_t i;
	size_t j;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if(dst_len < num - 1 && num > 0)
	{
		while (src[i] && dst_len + i < num - 1)
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	if(dst_len >= num)
		dst_len = num;
	return(dst_len + src_len);
}
