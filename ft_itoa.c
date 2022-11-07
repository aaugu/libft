/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:00:32 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/07 14:52:30 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intsize(int n);
void	ft_convertint(int n, int size, char *str);

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_intsize(n);
	if (n < 0)
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	ft_convertint(n, size, str);
	return (str);
}

int	ft_intsize(int n)
{
	int	size;

	size = 1;
	n /= 10;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

void	ft_convertint(int n, int size, char *str)
{
	while (n > 0)
	{
		str[size - 1] = n % 10 + '0';
		n /= 10;
		size--;
	}
}
