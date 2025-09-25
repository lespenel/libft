/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsize_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:42:13 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 11:33:46 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_string.h"

void	ft_putsize_base(size_t nb, char *base)
{
	const size_t	base_len = ft_strlen(base);

	if (nb >= base_len)
		ft_putsize_base(nb / base_len, base);
	write(STDOUT_FILENO, &base[nb % base_len], 1);
}
