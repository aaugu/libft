/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:18 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/01 09:22:11 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
   const char	str[] = "http://www.tutorialspoint.com";
   const char	ch = '.';
   char	*ret;

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/