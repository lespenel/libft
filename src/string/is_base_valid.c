/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_base_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:36:42 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 15:51:50 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ascii.h"

/**
 * @brief Check the validity of a numerical base.
 * - The base is empty or has only one character.
 * - The base contains duplicate characters.
 * - The base contains '+', '-', or whitespace characters.
 *
 * @param base
 * @param base_len 
 * @return 1 if the base is valid, 0 if not.
 */
int	is_base_valid(char *base, size_t base_len)
{
	size_t	i;
	size_t	j;

	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		if (ft_isspace(base[i]) || base[i] == '-' || base[i] == '+')
			return (0);
		++i;
	}
	return (1);
}
