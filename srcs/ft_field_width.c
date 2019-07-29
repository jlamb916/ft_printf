/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_field_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:53:21 by jolam             #+#    #+#             */
/*   Updated: 2019/02/21 12:23:30 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_field_width(char *s, t_flags *f)
{
	int		s_len;
	int		pad;
	char	*tmp;

	s_len = ft_strlen(s);
	if ((f->conv == 'd' || f->conv == 'i' || f->conv == 'f')
			&& s[0] != '-' && f->plus == 1 && f->zero == 0)
	{
		tmp = s;
		s = ft_strjoin("+", tmp);
		f->field_width--;
		free(tmp);
	}
	pad = f->field_width - s_len;
	if (s_len < f->field_width)
		s = ft_pad_str(s, f, pad);
	return (s);
}

char	*ft_pad_str(char *s, t_flags *f, int pad)
{
	char *tmp;

	if (f->minus == 1)
	{
		while (pad--)
		{
			tmp = s;
			s = ft_strjoin(tmp, " ");
			free(tmp);
		}
	}
	else
	{
		while (pad--)
		{
			tmp = s;
			s = ft_strjoin(" ", tmp);
			free(tmp);
		}
	}
	return (s);
}
