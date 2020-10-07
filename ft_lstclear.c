/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:30:24 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/07 18:00:00 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (lst && del)
	{
		while (*lst && lst)
		{
			tmp = *lst;
			*lst = (*lst)->next;
			(*del)(tmp->content);
			free(tmp);
		}
	}
}
