/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:25:33 by bdede             #+#    #+#             */
/*   Updated: 2023/07/31 10:25:34 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)

{
	int	result;

	result = nb;
	if (nb == 1 || power == 0 || (nb == 0 && power == 0))
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	return (result * ft_recursive_power(nb, power - 1));
}
