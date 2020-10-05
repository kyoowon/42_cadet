/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:20:51 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 16:39:20 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int value)
{
	while (*str != (char)value)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}
