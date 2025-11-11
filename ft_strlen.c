// #include <stdio.h>
// #include <string.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	printf("%ld\n", ft_strlen("hello world"));
	printf("%ld\n", strlen("hello world"));
}
*/
