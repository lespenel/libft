/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_up_padding.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:16:20 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 11:20:11 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"
#include "ft_string.h"

void	ft_putaddr_up_padding(void *addr)
{
	size_t	nb;
	char	buff[17];

	nb = (size_t)addr;
	ft_size_to_str_base(nb, "0123456789ABCDEF", buff, 17);
	ft_putstr_fd("0x", STDOUT_FILENO);
	ft_putstr_fd(buff, STDOUT_FILENO);
}
