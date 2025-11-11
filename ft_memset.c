#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned int	max_len;

	max_len = ft_strlen(s) + 1;
	i = 0;
	if (max_len > n)
		return ;
	while (i < n)
	{
		*s[i] = c;
		i++;
	}
	*s[max_len + 1] = '\0';
}

int	main(void)
{
	char	str[] = "hello world";
	printf("Before : %ld\n", strlen(str));
	memset(str, 65, 5);
	printf("After  : %s\n", str);
	printf("\n");
	char	str2[] = "hello world";
	printf("Before : %s\n", str2);
	ft_memset(str2, 65, 5);
	printf("After  : %s\n", str2);

}
