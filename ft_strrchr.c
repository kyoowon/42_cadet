/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:20:16 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/06 14:05:07 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*start;

	start = (char *)str;
	while (*str++)
		;
	while (--str != start && *str != (char)c)
		;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
