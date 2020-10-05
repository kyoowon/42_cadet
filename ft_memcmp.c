/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:22:23 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 15:29:09 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	while (num-- && *(unsigned char *)str1 == *(unsigned char *)str2)
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
