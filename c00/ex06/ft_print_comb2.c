/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 06:43:01 by bdede             #+#    #+#             */
/*   Updated: 2023/07/17 15:36:05 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;	

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar((x / 10) + 48);
			ft_putchar((x % 10) + 48);
			write(1, " ", 1);
			ft_putchar((y / 10) + 48);
			ft_putchar((y % 10) + 48);
			if (x != 98 || y != 99)
			{
				write (1, ", ", 2);
			}
			y = y + 1;
		}
		x = x + 1;
	}
}
