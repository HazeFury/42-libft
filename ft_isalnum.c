// #include <stdio.h>
// #include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isalnum(95)); // = 0
	printf("%d\n", ft_isalnum(50)); // = 1
	printf("%d\n\n", ft_isalnum(72)); // = 1

	printf("%d\n", ft_isalnum(95)); // = 0
	printf("%d\n", isalnum(50)); // = 1+
	printf("%d\n", isalnum(72)); // = 1+
}
*/
