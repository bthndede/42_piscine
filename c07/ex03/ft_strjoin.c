/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:19:44 by bdede             #+#    #+#             */
/*   Updated: 2023/08/03 08:19:45 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*sum;

	sum = (char *)malloc(sizeof(strs));
	j = 0;
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			sum[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i < (size -1))
		{
			sum[k++] = sep[j++];
		}
		i++;
	}
	sum[k] = '\0';
	return (sum);
}
