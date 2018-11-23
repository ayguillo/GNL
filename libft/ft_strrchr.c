/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:34:02 by ayguillo          #+#    #+#             */
/*   Updated: 2018/11/13 13:48:14 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strrchr(const char *s, int c)
{
	int i;

	i = ((ft_strlen(s)));
	while (s[i] != c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)&s[i]);
}
