/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:03:27 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/26 16:38:50 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Error\n");
	else
	{
		printf("%c\n", ft_tolower(argv[1][0]));
		printf("%c\n", tolower(argv[1][0]));
	}
	return (0);
}
*/
