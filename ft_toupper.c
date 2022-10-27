/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:03:31 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/26 16:39:05 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Error\n");
	else
	{
		printf("%c\n", ft_toupper(argv[1][0]));
		printf("%c\n", toupper(argv[1][0]));
	}
	return (0);
}
*/
