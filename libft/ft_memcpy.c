/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:17:26 by ayguillo          #+#    #+#             */
/*   Updated: 2018/11/09 12:01:49 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;
	char	*str;
	size_t	i;

	i = 0;
	ptr = (char*)dst;
	str = (char*)src;
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (dst);
}
