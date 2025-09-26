/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <lespenel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 03:02:49 by lespenel          #+#    #+#             */
/*   Updated: 2025/09/25 11:18:11 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <stddef.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	ft_putsize_base(size_t nb, char *base);
void	ft_putaddr(void *addr);
void	ft_putaddr_up(void *addr);
void	ft_putaddr_format(void *addr, int min_width, int prefix, int up);
void	*print_memory(void *addr, size_t n);

#endif
