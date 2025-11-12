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

#include <stdio.h>
#include <string.h>

/*
void	*memcpy(void *dest, const void *src, size_t n)
{

}
*/

int	main(void)
{
	char	src[] = "ABCDE";
	printf("Before : %s\n", src);
	memcpy(src + 1, src,  4);
	printf("After  : %s\n", src);
	printf("\n");
}
