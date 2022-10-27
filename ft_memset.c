/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:27 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/27 10:36:52 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len--)
		str[len] = c;
	return (b);
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
