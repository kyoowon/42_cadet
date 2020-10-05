/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyulee <kyulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:34:33 by kyulee            #+#    #+#             */
/*   Updated: 2020/10/05 21:49:08 by kyulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *str, int value, size_t num);
void	ft_bzero(void *ptr, size_t num);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t num);
void	*ft_memccpy(void *dest, const void *src, int c, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memchr(const void *str, int vlaue, size_t num);
int		ft_memcmp(const void *str1, const void *str2, size_t num);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t num);
size_t	ft_strlcat(char *dest, const char *src, size_t num);
char	*ft_strchr(const char *str, int value);
char	*ft_strrchr(const char *str, int value);
char	*ft_strnstr(const char *str, const char *to_find, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(size_t nmenb, size_t size);
char	*ft_strdup(const char *s);

#endif
