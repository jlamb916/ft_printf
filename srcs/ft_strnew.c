/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:00:50 by jolam             #+#    #+#             */
/*   Updated: 2019/02/15 17:54:18 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strnew(size_t size)
{
	char		*s;
	size_t		i;

	i = 0;
	if (!(s = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset((char*)s, (int)'\0', size + 1);
	return (s);
}
