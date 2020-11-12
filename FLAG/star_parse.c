/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   star_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:41:00 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 10:40:07 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flag.h"

void	star_parse(const char **s, int flags[FLAG_NUM], va_list ap)
{
	const char	*str;
	int			num;

	str = *s;
	str++;
	*s = str;
	if (flags[PRECISION] == 0)
		flags[PRECISION] = va_arg(ap, int);
	else
	{
		num = va_arg(ap, int);
		flags[WIDTH] = num > 0 ? num : -num;
		flags[LEFT] = num < 0 ? TRUE : flags[LEFT];
	}
	flags[STAR] = 1;
}
