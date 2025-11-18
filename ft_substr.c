/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:20:36 by marberge          #+#    #+#             */
/*   Updated: 2025/11/18 17:07:30 by marberge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*uc;
	char			*res;
	size_t			i;

	if (start >= ft_strlen(s) || len == 0)
		return ((char *)s);
	uc = (unsigned char *)s + start;
	i = 0;
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = uc[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "Hello Marco, what's up ?";
// 	str2 = ft_substr(str1, 6, 5);
// 	printf("\"%s\"\n", str2);
// 	return (0);
// }