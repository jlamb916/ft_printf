/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_uitoa_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:16:10 by jolam             #+#    #+#             */
/*   Updated: 2019/02/15 17:55:35 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_upper_uitoa_base(unsigned int n, int base)
{
	int				len;
	char			*s;
	unsigned int	nb;

	len = 1;
	nb = n;
	while (nb >= (unsigned)base)
	{
		len++;
		nb /= base;
	}
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s[len] = '\0';
	while (n >= (unsigned)base)
	{
		s[--len] = "0123456789ABCDEF"[n % base];
		n /= base;
	}
	s[--len] = "0123456789ABCDEF"[n % base];
	return (s);
}
