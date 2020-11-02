/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 20:03:14 by kyulee            #+#    #+#             */
/*   Updated: 2020/11/02 17:04:47 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** factor - str : String, (*f) : function pointer(factor unsigned int, char).
** return - string size.
** function - size to string.
*/

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (!str || !f)
		return (NULL);
	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i])
	{
		ret[i] = f(i, str[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
