/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:40:49 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 10:59:58 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flag.h"

static int	flag_num(char c)
{
	if (ft_is_num_nonzero(c))
		return (WIDTH);
	else if (c == '-')
		return (LEFT);
	else if (c == '.')
		return (PRECISION);
	else if (c == '*')
		return (STAR);
	else if (c == '0')
		return (EMPTY);
	return (-1);
}

t_bool		flag_parse(const char **s, va_list ap, int flags[FLAG_NUM])
{
	const char	*str;
	int			idx;

	str = *s;
	while ((idx = flag_num(*str)) != -1)
	{
		if (idx == LEFT)
			left_parse(&str, flags);
		if (idx == EMPTY)
			empty_parse(&str, flags);
		if (idx == WIDTH)
			width_parse(&str, flags);
		if (idx == PRECISION)
			precision_parse(&str, flags);
		if (idx == STAR)
			star_parse(&str, flags, ap);
	}
	*s = str;
	return (TRUE);
}
