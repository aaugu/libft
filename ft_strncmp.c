/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:03:22 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/01 10:12:32 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "\x12\xff\x65\x12\xbd\xde\xad";
	char	s2[] = "\x12\x02";

	printf("%d\n", strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%s", "-----\n");
	printf("%d\n", strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s2, 6));
	return (0);
}
*/