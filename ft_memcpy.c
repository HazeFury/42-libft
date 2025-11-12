/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:21:04 by marberge          #+#    #+#             */
/*   Updated: 2025/11/12 19:34:35 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sr;
	unsigned char	*de;
	unsigned int	i;

	i = 0;
	sr = (unsigned char *)src;
	de = (unsigned char *)dest;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	de[i] = '\0';
	return (de);
}

/*
int	main(void)
{
	char	src[] = "ABCDE";
	char	dest[10];
	printf("Before : %s\n", src);
	memcpy(dest, src,  0);
	printf("After  : %s\n", dest);
	printf("\n");
	char	src2[] = "ABCDE";
	char	dest2[10];
	printf("Before : %s\n", src2);
	ft_memcpy(dest2, src2,  0);
	printf("After  : %s\n", dest2);
}
*/
