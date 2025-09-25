/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizetoa_base_buff.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:14:25 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 11:18:40 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_sizetoa_base_buff(size_t nb, char *base, char buff[], size_t b_size)
{
	const size_t	base_len = ft_strlen(base);

	while (b_size)
	{
		--b_size;
		buff[b_size] = base[nb % base_len];
		nb /= base_len;
	}
}
