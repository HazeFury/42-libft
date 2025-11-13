/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 23:23:20 by marberge          #+#    #+#             */
/*   Updated: 2025/11/13 23:36:50 by marberge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	if (c == 0)
		return (s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
