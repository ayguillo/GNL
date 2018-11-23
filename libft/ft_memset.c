/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:40:57 by ayguillo          #+#    #+#             */
/*   Updated: 2018/11/09 13:41:43 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	n;

	ptr = (char*)b;
	n = 0;
	while (n < len)
		ptr[n++] = (char)c;
	return (b);
}
