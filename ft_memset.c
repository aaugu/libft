/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:27 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/26 15:55:42 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;

	s = str;
	while (n--)
		s[n] = c;
	return (str);
}
/*
int	main(void)
{
	char	str1[30] = "Hello I want cookies";
	char	str2[30] = "Hello I want cookies";
	printf("%s\n", str1);
	ft_memset(str1, '@', 5);
	printf("%s\n-------------------\n", str1);
	printf("%s\n", str2);
	memset(str2, '@', 5);
	printf("%s\n", str2);
	return (0);
}
*/
