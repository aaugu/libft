/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:24:51 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/31 10:07:17 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = '\0';
}
/*
int	main(void)
{
	char	str1[30] = "Hello I want cookies";
	char	str2[30] = "Hello I want cookies";
	printf("%s\n", str1);
	ft_bzero(str1, 5);
	printf("%s\n-------------------\n", str1);
	printf("%s\n", str2);
	bzero(str2, 5);
	printf("%s\n", str2);
	return (0);
}
*/
