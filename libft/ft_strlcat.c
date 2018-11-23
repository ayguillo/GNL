/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:37:38 by ayguillo          #+#    #+#             */
/*   Updated: 2018/11/13 13:21:53 by ayguillo         ###   ########.fr       */
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

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t dstlen;
	size_t i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (size < dstlen)
		return (size + srclen);
	if (size >= dstlen)
		while (i + dstlen < (size - 1) && src[i])
		{
			dst[i + dstlen] = src[i];
			i++;
		}
	dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}
