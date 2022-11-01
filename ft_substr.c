/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:43:32 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/01 14:36:50 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (ft_strlen(s) - (size_t)start > len)
		str = malloc(sizeof(str) * (len + 1));
	else
		str = malloc(sizeof(str) * (ft_strlen(s) - len + 1));
	if (!str)
		return (0);
	i = 0;
	while ((size_t)start < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
*/