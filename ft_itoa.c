/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:00:32 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/31 12:49:53 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_intsize(int n);

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_intsize(n);
	if (n < 0)
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size + 1] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		str[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (str);
}

int	ft_intsize(int n)
{
	int	size;

	size = 0;
	n /= 10;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

int	main(int argc, char **argv)
{
	char	*result;

	(void) argc;
	result = ft_itoa(atoi(argv[1]));
	printf("%s\n", ft_itoa(atoi(argv[1])));
	free(result);
	return (0);
}
*/