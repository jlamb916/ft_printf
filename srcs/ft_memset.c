/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:02:18 by jolam             #+#    #+#             */
/*   Updated: 2019/02/18 15:01:14 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char*)b;
	while (len-- > 0)
		*s++ = (unsigned char)c;
	return (b);
}
