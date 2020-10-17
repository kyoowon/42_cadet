/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:18:02 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/16 21:04:43 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** factor - lst : Pointing list, del fuction pointer
** return - NULL
** function - one list is deleted
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	else
	{
		(*del)(lst->content);
		free(lst);
	}
}
