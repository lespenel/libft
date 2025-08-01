/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:47:16 by lespenel          #+#    #+#             */
/*   Updated: 2025/08/01 11:35:49 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
{
	size_t	i;

	if (str == NULL)
		str = *saveptr;
	if (str == NULL)
		return (NULL);
	while (*str && ft_strchr(delim, *str))
		++str;
	i = 0;
	while (str[i] && ft_strchr(delim, str[i]) == NULL)
		++i;
	if (str[i])
	{
		str[i] = '\0';
		*saveptr = (str + i + 1);
	}
	else
	{
		*saveptr = NULL;
		return (NULL);
	}
	return (str);
}
