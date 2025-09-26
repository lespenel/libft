/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:16:20 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/26 12:34:05 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"
#include "ft_string.h"

static void	print_zeros(size_t n);

/**
 * @brief Prints a pointer address in hexadecimal format with optional
 * padding and "0x" prefix.
 * 
 * The address is printed in specified case hexadecimal,
 * padded with leading zeros to match 
 * the specified minimum size (min_width).
 * If prefix is non-zero, "0x" is prepended.
 * 
 * @param addr Pointer address to print.
 * @param min_width Minimum output width, padded with zeros if needed.
 * @param prefix If non-zero, prepends "0x" to the address.
 * @param uppercase If non-zero addr will be displayed in uppercase
 */
void	ft_putaddr_format(void *addr, int min_width, int prefix, int uppercase)
{
	size_t	nb;
	char	buff[17];
	int		len;
	char	*base;

	base = "0123456789abcdef";
	if (uppercase)
		base = "0123456789ABCDEF";
	nb = (size_t)addr;
	len = ft_size_to_str_base(nb, base, buff, 17);
	if (len == -1)
		return ;
	if (prefix)
		ft_putstr_fd("0x", STDOUT_FILENO);
	print_zeros(min_width - len);
	ft_putstr_fd(buff, STDOUT_FILENO);
}

static void	print_zeros(size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd('0', STDOUT_FILENO);
		++i;
	}
}
