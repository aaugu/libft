/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:27 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/07 16:09:12 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memset() function writes len bytes of value c (converted to an unsigned
char) to the string b. Returns its first argument.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len--)
		str[len] = c;
	return (b);
}
