/*
#include <stddef.h>
#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n) {
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i++ < n)
		str[i] = 0;
}

int	main(void)
{
	char	str1[30] = "Hello I want cookies";
	char	str2[30] = "Hello I want cookies";
	printf("%s\n", str1);
	ft_bzero(str1, 5);
	printf("%s\n-------------------\n", str1);
	printf("%s\n", str2);
	bzero(str2, 5);
	printf("%s\n", str2);
	return (0);
}
*/
