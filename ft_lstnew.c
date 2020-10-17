/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:37:08 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/16 21:26:54 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** factor - content : string element
** return - pointing last list
** function - Create a new list by inserting a string element
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;
	size_t	len;

	if (!(ret = (t_list *)malloc(sizeof(t_list) * 1)))
		return (NULL);
	if (!content)
	{
		ret->content = NULL;
		ret->next = NULL;
	}
	else
	{
		len = ft_strlen(content);
		if (!(ret->content = (void *)malloc(sizeof(*content) * len)))
			return (NULL);
		ft_memcpy(ret->content, content, len);
		ret->next = NULL;
	}
	return (ret);
}
