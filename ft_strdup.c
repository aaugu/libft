/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:29 by aaugu             #+#    #+#             */
/*   Updated: 2022/10/27 14:54:37 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_strlen(s1);
	dest = malloc(sizeof(*s1) * (size + 1));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char	*dest;

	(void) argc;
	dest = ft_strdup(argv[1]);
	printf("%s", dest);
	free(dest);
	return (0);
}
*/