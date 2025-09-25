/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:45:18 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 11:27:23 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_putaddr_up(void *addr)
{
	size_t	nb;

	nb = (size_t)addr;
	ft_putstr_fd("0x", STDOUT_FILENO);
	ft_putsize_base(nb, "0123456789ABCDEF");
}
