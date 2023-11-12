/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:14:19 by lespenel          #+#    #+#             */
/*   Updated: 2023/11/11 04:09:32 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_cut(char const *s, char c, char **strs);
int		ft_count(char const *s, char c);
void	ft_free(char **strs, int count);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	count;

	count = ft_count(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	if (ft_cut(s, c, strs) == 0)
		return (NULL);
	strs[count] = 0;
	return (strs);
}

int	ft_cut(char const *s, char c, char **strs)
{
	size_t	i;
	int		count;

	count = 0;
	while (*s)
	{
		i = 0;
		while (s[i] != c && s[i])
			i++;
		if (i != 0)
		{
			strs[count] = malloc(sizeof(char) * (i + 1));
			if (!strs[count])
			{
				ft_free(strs, count);
				return (0);
			}
			ft_strncpy(strs[count], s, i);
			count++;
			s += i;
		}
		else
			s++;
	}
	return (1);
}

void	ft_free(char **strs, int count)
{
	while (count - 1 >= 0)
	{
		free(strs[count - 1]);
		count --;
	}
	free(strs);
}

int	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	while (*s)
	{
		i = 0;
		while (s[i] != c && s[i])
			i++;
		if (i != 0)
		{
			s += i;
			count++;
		}
		else
			s++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	**strs;
	strs = ft_split("leoespenel", 'e');
	for (int i = 0; strs[i]; i++)
		printf("%s", strs[i]);
}*/
