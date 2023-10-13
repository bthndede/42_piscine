/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:32:00 by bdede             #+#    #+#             */
/*   Updated: 2023/07/17 15:05:52 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alphabet;

	reverse_alphabet = 122;
	while (reverse_alphabet > 96)
	{
		write(1, &reverse_alphabet, 1);
		reverse_alphabet = reverse_alphabet - 1; 
	}
}
