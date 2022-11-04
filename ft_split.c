/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:42:03 by aaugu             #+#    #+#             */
/*   Updated: 2022/11/04 11:20:21 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_countwords(char const *s, char c);
int	*ft_countchars(char const *s, char c, int words);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	int		*sizes;
	char	**strs;

	words = ft_countwords(s, c);
	strs = (char **)malloc(sizeof(char *) * (words + 1));
	if (!strs)
		return (0);
	strs[words] = NULL;
	sizes = ft_countchars(s, c, words);

}

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count + 1);
}

int	*ft_countchars(char const *s, char c, int words)
{
	int	i;
	int	j;
	int	count;
	int	*sizes;

	sizes = malloc(sizeof(int) * (words + 1));
	if (!sizes)
		return (0);
	sizes[words] = -1;
	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] == c || s[i + 1] == 0) && sizes[j] != -1)
		{
			if (s[i + 1] == 0 && s[i] != c)
				count++;
			sizes[j] = count;
			count = -1;
			j++;
		}
		i++;
		count++;
	}
	return (sizes);
}

int	main(void)
{
	char const	*s1 = "bliiiablooableeeea";
	char const	*s2 = "bablablo";
	char		c = 'a';
	int			*sizes1;
	int			*sizes2;
	int			i;

	sizes1 = ft_split(s1, c);
	sizes2 = ft_split(s2, c);
	i = 0;
	while (sizes1[i] != -1)
	{
		printf("%d\n", sizes1[i]);
		i++;
	}
	printf("-------\n");
	i = 0;
	while (sizes2[i] != -1)
	{
		printf("%d\n", sizes2[i]);
		i++;
	}
	free(sizes1);
	free(sizes2);
	return (0);
}
*/