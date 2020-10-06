/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:58:10 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/06 15:29:12 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	len;
	size_t	start;
	size_t	i;

	start = 0;
	len = 0;
	i = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	len = ft_strlen(s1);
	while (len > start && is_set(s1[len - 1], set))
		len--;
	if (!(ret = (char *)malloc(sizeof(char) * (len - start + 1))))
		return (NULL);
	while (start < len)
		ret[i++] = s1[start++];
	ret[i] = '\0';
	return (ret);
}
