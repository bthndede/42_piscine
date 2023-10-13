/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 01:43:26 by bdede             #+#    #+#             */
/*   Updated: 2023/08/01 01:44:36 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	number;

	if (nb < 0)
		return (0);
	i = 0;
	number = (unsigned int) nb;
	while (i * i <= number)
	{
		if (i * i == number)
			return (i);
		i++;
	}
	return (0);
}
