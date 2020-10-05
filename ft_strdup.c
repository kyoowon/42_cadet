/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 19:06:21 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/04 19:12:38 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i++])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
