/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:15 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/27 10:19:01 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
		printf("%d\n", ft_isprint(argv[1][0]));
		printf("%d\n", isprint(argv[1][0]));
	}
	return (0);
}
*/
