/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:11:11 by jolam             #+#    #+#             */
/*   Updated: 2019/02/21 10:39:50 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_conv_d(va_list ap, t_flags *f, t_length *l)
{
	intmax_t	i;
	char		*s;
	char		*tmp;

	i = ft_parse_len(ap, l);
	if (f->precision == 0 && i == 0)
		return (ft_strnew(0));
	if (l->l == 1 || l->ll == 1)
		s = ft_ltoa(i);
	else
		s = ft_itoa(i);
	if (f->precision > -1)
		s = ft_precision(s, f);
	return (s);
}
