/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:41:25 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 19:04:15 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void *ptr;

	ptr = (void*)malloc(nmenb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmenb);
	return (ptr);
}
