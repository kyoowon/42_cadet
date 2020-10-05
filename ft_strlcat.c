/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:05:52 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 16:18:50 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t dst_len;
	size_t src_len;
	size_t i;
	size_t j;

	j = 0;
	while (j < num && dest[j])
		j++;
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = 0;
	while (j < src_len && dst_len + i + 1 < num)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (j + src_len);
}
