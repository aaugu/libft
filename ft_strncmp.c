/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:03:22 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/27 14:27:41 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "Hello !";
	char	s2[] = "Hello World";

	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%s", "-----\n");
	printf("%d\n", strncmp(s1, s2, 7));
	printf("%d\n", ft_strncmp(s1, s2, 7));
	printf("%s", "-----\n");
	printf("%d\n", strncmp(s2, s1, 0));
	printf("%d\n", ft_strncmp(s2, s1, 0));
	return (0);
}
*/
