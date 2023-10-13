/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:39:10 by bdede             #+#    #+#             */
/*   Updated: 2023/07/31 10:39:12 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fibonacci;

	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	return (fibonacci = ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
