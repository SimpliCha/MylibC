/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chruhin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:07:04 by chruhin           #+#    #+#             */
/*   Updated: 2022/11/23 14:55:31 by chruhin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBc_H
# define LIBC_H

# include <stddef.h>
# include <stdint.h>
# include <unistd.h>
# include <stdlib.h>

int		my_isalpha(int c);
int		my_isalnum(int c);
int		my_isdigit(int c);
int		my_isdigit(int c);
int		my_isascii(int c);
int		my_isprint(int c);
int		my_toupper(int c);
int		my_tolower(int c);
int		my_atoi(const char *nptr);
int		my_strncmp(const char *s1, const char *s2, size_t n);
int		my_memcmp(const void *s1, const void *s2, size_t n);
void	my_bzero(void *s, size_t n);
void	*my_memset(void *s, int c, size_t n);
void	*my_calloc(size_t nmemb, size_t size);
void	*my_memchr(const void *s, int c, size_t n);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memmove(void *dest, const void *src, size_t n);
char	*my_strdup(const char *s);
char	*my_strchr(const char *s, int c);
char	*my_strrchr(const char *s, int c);
char	*my_strnstr(const char *big, const char *little, size_t len);
size_t	my_strlen(const char *s);
size_t	my_strlcpy(char *dest, const char *src, size_t size);
size_t	my_strlcat(char *dest, const char *src, size_t size);

#endif
