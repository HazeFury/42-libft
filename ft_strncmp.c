/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:23:30 by marberge          #+#    #+#             */
/*   Updated: 2025/11/14 15:40:32 by marberge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char		str1[] = "ABC";
	char		str2[] = "ABC";
	unsigned int	n = 4;	

	printf("<%s> - <%s> (%d) =  %d\n", str1, str2, n, ft_strncmp(str1, str2, n));
	return (0);
}
*/