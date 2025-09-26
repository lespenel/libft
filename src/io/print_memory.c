/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 12:27:41 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/26 12:29:20 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ascii.h"
#include "ft_io.h"

static void	print_line(void *addr, size_t n);
static void	print_chars(void *addr, size_t n);

void	*print_memory(void *addr, size_t n)
{
	size_t	i;
	size_t	size_left;

	i = 0;
	while (i < n)
	{
		size_left = n - i;
		if (size_left > 15)
			print_line(addr + i, 16);
		else
			print_line(addr + i, size_left);
		i += 16;
	}
	return (addr);
}

static void	print_line(void *addr, size_t n)
{
	size_t			i;
	unsigned char	*c;

	ft_putaddr_format(addr, 16, 0, 0);
	ft_putstr_fd(":", STDOUT_FILENO);
	i = 0;
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar_fd(' ', STDOUT_FILENO);
		if (i < n)
		{
			c = addr + i;
			if (*c < 16)
				ft_putchar_fd('0', STDOUT_FILENO);
			ft_putsize_base(*c, "0123456789abcdef");
		}
		else
			ft_putstr_fd("  ", STDOUT_FILENO);
		++i;
	}
	ft_putchar_fd(' ', STDOUT_FILENO);
	print_chars(addr, n);
}

static void	print_chars(void *addr, size_t n)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	while (i < n)
	{
		c = addr + i;
		if (ft_isprint(*c))
			write(STDOUT_FILENO, c, 1);
		else
			ft_putchar_fd('.', STDOUT_FILENO);
		++i;
	}
	ft_putchar_fd('\n', STDOUT_FILENO);
}
