/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:43:04 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 11:26:43 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_putaddr(void *addr)
{
	size_t	nb;

	nb = (size_t)addr;
	ft_putstr_fd("0x", STDOUT_FILENO);
	ft_putsize_base(nb, "0123456789abcdef");
}
