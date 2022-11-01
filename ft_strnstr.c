/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:03:25 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/01 09:59:24 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_matching(const char *str, const char *to_find, size_t i, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = 0;
	if (!needle || !len)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (is_matching(haystack, needle, i, len))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

int	is_matching(const char *str, const char *to_find, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (to_find[j] != '\0' && i < len)
	{
		if (to_find[j] == str[i + j])
			j++;
		else
			return (0);
	}
	return (1);
}
