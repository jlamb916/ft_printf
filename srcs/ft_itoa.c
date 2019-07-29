/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 17:10:33 by jolam             #+#    #+#             */
/*   Updated: 2019/02/18 21:18:02 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_itoa(int n)
{
	long	nb;
	char	*s;
	int		len;

	len = 1;
	n < 0 ? len++ : 0;
	nb = n < 0 ? -(long)n : n;
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s[len] = '\0';
	nb = n < 0 ? -(long)n : n;
	n < 0 ? *s = '-' : 0;
	while (nb > 9)
	{
		s[--len] = nb % 10 + '0';
		nb /= 10;
	}
	s[--len] = nb % 10 + '0';
	return (s);
}
