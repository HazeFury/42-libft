#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned int	max_len;
	unsigned char	*str;
	str  = (unsigned char *)s;

	max_len = ft_strlen((const char *)str) + 1;
	printf("==> longueur : %u\n", max_len);
	i = 0;
	if (max_len > n)
		return (s);
	while (i < n && str[i] != '\0')
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	str[] = "hello world";
	printf("Before : %s\n", str);
	memset(str, 0, 5);
	printf("After  : %s\n", str);
	printf("\n");
	char	str2[] = "hello world";
	printf("Before : %s\n", str2);
	ft_memset(str2, 0, 5);
	printf("After  : %s\n", str2);
}
