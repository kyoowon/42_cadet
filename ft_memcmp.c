/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:22:23 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/05 22:00:02 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	size_t i;
	
	i = 0;
	while (i < num)
	{
		if (*(unsigned char *)(str1 + i) != *(unsigned char *)(str2 + i))
			return (*(unsigned char *)(str1 + i) - *(unsigned char *)(str2 + i));
		i++;
	}
	return (0);
}
