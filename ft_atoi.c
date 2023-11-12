/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespenel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:56 by lespenel          #+#    #+#             */
/*   Updated: 2023/11/11 02:11:51 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(const char	*nptr)
{
	int	nb;
	int	index;
	int	sign;

	index = 0;
	nb = 0;
	sign = 1;
	while ((nptr[index] <= 13 && nptr[index] >= 9) || nptr[index] == 32)
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = sign * -1;
		index++;
	}
	while (nptr[index] <= '9' && nptr[index] >= '0')
	{
		nb = nb * 10 + (nptr[index] - '0');
		index++;
	}
	return (nb * sign);
}

/*
int	main(void)
{
	char	*str;

	str = "+214748364";
	printf("%d", ft_atoi(str));
}*/
