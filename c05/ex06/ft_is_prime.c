/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:03:07 by bdede             #+#    #+#             */
/*   Updated: 2023/07/31 11:03:25 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	j;
	int	index;

	index = 2;
	j = nb / 2;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (index <= j)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
