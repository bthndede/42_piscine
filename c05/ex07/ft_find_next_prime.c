/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 01:34:07 by bdede             #+#    #+#             */
/*   Updated: 2023/08/01 01:34:08 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2) 
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0) 
			return (0); 
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2) 
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
