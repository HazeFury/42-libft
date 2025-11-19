/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marberge <marberge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:06:14 by marberge          #+#    #+#             */
/*   Updated: 2025/11/19 20:21:37 by marberge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static int	ft_index_charset(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = malloc((1 + ft_count_word(s, c)) * sizeof(char *));
	if (res == NULL || s[0] == '\0')
		return (res);
	while (j < ft_count_word(s, c))
	{
		k = ft_index_charset(s + i, c);
		if (k == 0)
		{
			i += 1;
			continue ;
		}
		res[j] = ft_substr(s, i, k);
		i += k + 1;
		j++;
	}
	res[j] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char	**result;
// 	int	i;

// 	i = 0;
// 	result = ft_split("\0aa\0bbb", '\0');
// 	while (result[i] != NULL)
// 		printf("%s\n", result[i++]);
// 	return (0);
// }