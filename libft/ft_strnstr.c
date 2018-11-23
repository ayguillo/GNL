/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:54:11 by ayguillo          #+#    #+#             */
/*   Updated: 2018/11/14 15:26:54 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char			*ft_strnstr(const char *haystack, const char *needle,
		size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	if (len == 0)
		return (NULL);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
