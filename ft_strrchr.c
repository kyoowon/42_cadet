/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:20:16 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 15:55:05 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int value)
{
	char	*start;

	start = (char *)str;
	while (*str++)
		;
	while (--str != start && *str != (char)value)
		;
	if (*str == (char)value)
		return ((char *)str);
	return (NULL);
}
