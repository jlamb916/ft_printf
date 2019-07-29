/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 17:22:12 by jolam             #+#    #+#             */
/*   Updated: 2019/02/15 18:00:45 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_itoa_base(int n, int base)
{
	char	*s;
	int		len;
	long	nb;

	len = 1;
	n < 0 ? len++ : 0;
	nb = n < 0 && base == 10 ? -(long)n : n;
	while (nb >= base)
	{
		len++;
		nb /= base;
	}
	if (!(s = (char*)malloc(sizeof(int) * len + 1)))
		return (NULL);
	s[len] = '\0';
	n < 0 && base == 10 ? *s = '-' : 0;
	nb = n < 0 ? -(long)n : n;
	while (nb >= base)
	{
		s[--len] = nb % base < 10 ? nb % base + '0' : nb % base + 55;
		nb /= base;
	}
	s[--len] = nb % base < 10 ? nb % base + '0' : nb % base + 55;
	return (s);
}
