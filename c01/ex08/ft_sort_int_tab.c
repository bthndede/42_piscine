/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:47:42 by bdede             #+#    #+#             */
/*   Updated: 2023/07/22 11:47:45 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	j;
	int	k;

	j = 0;
	k = j + 1;
	while (j < size)
	{
		while (k < size)
		{
			if (tab[j] > tab[k])
			{
				temp = tab[j];
				tab[j] = tab[k];
				tab[k] = temp;
			}
			k++;
		}
		j++;
		k = j + 1;
	}
}
