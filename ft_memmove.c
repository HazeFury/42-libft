/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:04:04 by marberge          #+#    #+#             */
/*   Updated: 2025/11/12 23:23:35 by marberge         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sr;
	unsigned char	*de;
	unsigned int	i;

	i = 0;
	sr = (unsigned char *)src;
	de = (unsigned char *)dest;
    if (de > sr)
    {
        printf("je copie de droite a gauche\n");
    }
    if (de <= sr)
    {
        printf("je copie de gauche a droite\n");
    }
    printf("RESULTAT dest : %ld - src : %ld = %ld\n", strlen((const char *)de), strlen((const char *)sr), de - sr);

	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	// de[i] = '\0';
	return (de);
}

int	main(void)
{
	printf("==> si src > dest :\n");
	char	src[] = "ABCDE";
	printf("Before : %s\n", src);
	memmove(src, src + 1,  4);
	printf("After  : %s\n", src);
	printf("\n");
	char	src2[] = "ABCDE";
	printf("Before : %s\n", src2);
	ft_memmove(src2, src2 + 1,  4);
	printf("After  : %s\n", src2);

	printf("\n==> si src < dest :\n");
	char	src3[] = "ABCDE";
	printf("Before : %s\n", src3);
	memmove(src3 + 1, src3,  4);
	printf("After  : %s\n", src3);
	printf("\n");
	char	src4[] = "ABCDE";
	printf("Before : %s\n", src4);
	ft_memmove(src4 + 1, src4,  4);
	printf("After  : %s\n", src4);
}
