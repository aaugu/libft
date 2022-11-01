/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:22 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/01 10:09:17 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	char	*s1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
    char	*s2 = "\xff\0\0\xaa\0\xde\x00MBS";

	printf("%d\n", memcmp(s1, s2, 1));
	printf("%d\n", ft_memcmp(s1, s2, 1));
	printf("%s", "-----\n");
	printf("%d\n", memcmp(s1, s2, 9));
	printf("%d\n", ft_memcmp(s1, s2, 9));
	return (0);
}
*/