// #include <stdio.h>
// #include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
// main pour tester (a retirer pour le rendu)
int	main(void)
{
	printf("%d\n", ft_isalpha(72)); // = 1
	printf("%d\n", ft_isalpha(50)); // = 0
	
	printf("%d\n", isalpha(75)); // = 1024
	printf("%d\n", isalpha(50)); // = 0
}
*/
