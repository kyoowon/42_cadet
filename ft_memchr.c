/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:00:37 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/06 13:58:02 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (i < num)
	{
		if (*(unsigned char*)(str + i) == (unsigned char)c)
			return ((void*)(str + i));
		i++;
	}
	return (NULL);
}
