/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdede <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:32:31 by bdede             #+#    #+#             */
/*   Updated: 2023/07/25 14:32:32 by bdede            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strlowcase(char *str)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(str) - 1;
	while (i <= size)
	{
		if ((*(str + i) <= 'Z') && (*(str + i) >= 'A'))
			*(str + i) += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
		if (flag == 1 && (str[i] <= 'z' && str[i] >= 'a'))
			flag = 0;
		i++;
	}
	return (str);
}
