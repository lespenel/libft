/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_to_str_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:14:25 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/26 09:17:05 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include "ft_string.h"

/**
 * @brief Converts a size_t to a string in a given base, 
 * filling a fixed-size buffer.
 *
 * @note: It is the programmer's responsibility to provide a sufficiently
 * large buffer. If the buffer is too small, 
 * the function may not be able to fully convert the number.
 *
 * @param nb: The value of the size to convert.
 * @param base: The base in wich the nb value will be converted.
 * @param buff:	The destination buffer for the converted nb.
 * @param b_size: The length of the buffer (should include the '\0')
 */
void	ft_size_to_str_base(size_t nb, char *base, char buff[], size_t b_size)
{
	const size_t	base_len = ft_strlen(base);
	size_t			index;

	if (is_base_valid(base, base_len) == 0 || b_size < 2)
	{
		buff[0] = '\0';
		return ;
	}
	if (nb == 0)
	{
		buff[0] = base[0];
		buff[1] = '\0';
		return ;
	}
	index = b_size - 1;
	while (nb && index)
	{
		--index;
		buff[index] = base[nb % base_len];
		nb /= base_len;
	}
	if (nb == 0 && index)
		ft_memmove(buff, buff + index, b_size - index);
	buff[b_size - 1] = '\0';
}
