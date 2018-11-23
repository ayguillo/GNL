/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:11:13 by ayguillo          #+#    #+#             */
/*   Updated: 2018/11/12 10:18:46 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int i;

	i = 0;
	if (!(str))
		return (0);
	while (str[i])
		i++;
	return (i);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lens1;
	int		lens2;

	if (!(s1) || !(s2))
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(*str) * (lens1 + lens2 + 1))))
		return (NULL);
	lens1 = 0;
	while (s1[lens1])
	{
		str[lens1] = s1[lens1];
		lens1++;
	}
	lens2 = 0;
	while (s2[lens2])
		str[lens1++] = s2[lens2++];
	str[lens1] = '\0';
	return (str);
}