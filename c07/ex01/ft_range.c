/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:20:01 by bdede             #+#    #+#             */
/*   Updated: 2023/08/03 08:20:02 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*out;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	out = (int *)malloc(sizeof(int) * (max - min));
	if (!out)
	{
		return (NULL);
	}
	while (min < max)
	{
		out[i] = min;
		min++;
		i++;
	}
	return (out);
}
