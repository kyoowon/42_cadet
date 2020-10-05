/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:00:37 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 15:52:34 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int vlaue, size_t num)
{
	while (num--)
	{
		if (*(unsigned char *)str == (unsigned char)vlaue)
			return ((void *)str);
		str--;
	}
	return (NULL);
}
