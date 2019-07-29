/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:14:14 by jolam             #+#    #+#             */
/*   Updated: 2019/02/21 10:40:20 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_ultoa_base(unsigned long n, int base)
{
	char			*s;
	unsigned long	nb;
	int				len;

	len = 1;
	nb = n;
	while (nb >= (unsigned)base)
	{
		nb /= base;
		++len;
	}
	s = (char*)malloc(sizeof(char) * (len + 1));
	s[len] = '\0';
	while (n >= (unsigned)base)
	{
		s[--len] = "0123456789abcdef"[n % base];
		n /= base;
	}
	s[--len] = "0123456789abcdef"[n % base];
	return (s);
}
