/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 12:44:12 by jolam             #+#    #+#             */
/*   Updated: 2019/02/15 16:15:42 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strdup(char *s)
{
	int		len;
	char	*tmp;

	len = 0;
	while (s[len])
		len++;
	if (!(tmp = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	len = 0;
	while (s[len])
	{
		tmp[len] = s[len];
		len++;
	}
	tmp[len] = '\0';
	return (tmp);
}
