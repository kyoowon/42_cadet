/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:41:25 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/06 13:56:01 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void *ret;

	ret = (void*)malloc(nmenb * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, nmenb);
	return (ret);
}
