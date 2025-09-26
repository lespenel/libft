/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 01:43:43 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 15:38:05 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strnchr(const char *s, int c, size_t n);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strtrim(char const *s1, char const *s2);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
char	*ft_strjoin_free_s1(char *s1, char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	**ft_split_free(char const *s, char c);
char	**ft_split_set(char const *s, char *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtok_r(char *str, const char *delim, char **saveptr);
char	*ft_strncpy(char *dest, const char *src, size_t n);
void	ft_size_to_str_base(size_t nb, char *base, char buff[], size_t b_size);
int		is_base_valid(char *base, size_t base_len);

#endif
