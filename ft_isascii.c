/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:10 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/27 10:18:39 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Error\n");
	else
	{
		printf("%d\n", ft_isascii(argv[1][0]));
		printf("%d\n", isascii(argv[1][0]));
	}
	return (0);
}
*/
