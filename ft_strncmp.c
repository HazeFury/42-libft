/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:23:30 by marberge          #+#    #+#             */
/*   Updated: 2025/11/14 15:50:50 by marberge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char *	us1;
	unsigned char *	us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && us1[i] && us1[i] != '\0' && us1[i] == us2[i])
		i++;
	return (us1[i] - us2[i]);
}

/*
int	main(void)
{
	char		str1[] = "ABC";
	char		str2[] = "ABC";
	unsigned int	n = 4;	
	
	printf("<%s> - <%s> (%d) =  %d\n", str1, str2, n, ft_strncmp("test\200", "test\0", 6));
	return (0);
}
*/
