/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:23:25 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 14:24:12 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t num)
{
	while (num--)
		*((unsigned char*)str + num) = (unsigned char)value;
	return (str);
}
