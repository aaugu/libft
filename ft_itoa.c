/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:00:32 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/25 13:41:08 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_size(int n);

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_size(n);
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

int	ft_size(int n)
{
	int	size;

	size = 0;
	while (n /= 10)
		size++;
	return (size);
}

int	main(int argc, char **argv)
{
	(void) argc;
	result = ft_itoa(atoi(argv[1]));
	printf("%s\n", result);
	free(result);
	return (0);
}
