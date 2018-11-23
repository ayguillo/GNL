/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:51:11 by ayguillo          #+#    #+#             */
/*   Updated: 2018/11/14 17:03:00 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int n)
{
	int res;

	res = 1;
	if (n <= 0 && n >= 214483600)
		return (0);
	while ((res * res) <= n)
	{
		res++;
		if (res * res == n)
			return (res);
	}
	return (0);
}