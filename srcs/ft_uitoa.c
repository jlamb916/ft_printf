/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 19:46:21 by jolam             #+#    #+#             */
/*   Updated: 2019/02/15 15:48:57 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_uitoa(unsigned int n)
{
	char			*s;
	int				len;
	unsigned int	nb;

	len = 1;
	nb = n;
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	s[len] = '\0';
	while (n > 9)
	{
		s[--len] = n % 10 + '0';
		n /= 10;
	}
	s[--len] = n % 10 + '0';
	return (s);
}
