/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:48:30 by lespenel          #+#    #+#             */
/*   Updated: 2023/11/09 16:01:16 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t nmeb, size_t size)
{
	char	*ptr;
	size_t	sizee;

	sizee = nmeb * size;
	if (size != 0)
		if (sizee / size != nmeb)
			return (NULL);
	ptr = malloc(sizeof(char) * sizee);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, sizee);
	return (ptr);
}
