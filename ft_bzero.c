/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:39:13 by marberge          #+#    #+#             */
/*   Updated: 2025/11/12 17:00:10 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <strings.h>

size_t	ft_strlen(const char *s);

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned int	max_len;
	unsigned char	*str;

	str = (unsigned char *)s;
	max_len = ft_strlen((const char *)str) + 1;
	i = 0;
	if (n > max_len)
		return ;
	while (i < n && str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	return ;
}

/*
int	main(void)
{
	char	str[] = "hello world";
	printf("Before : %s\n", str);
	bzero(str, 5);
	printf("After  : %s\n", str);
	printf("\n");
	char	str2[] = "hello world";
	printf("Before : %s\n", str2);
	ft_bzero(str2, 5);
	printf("After  : %s\n", str2);
}
*/
