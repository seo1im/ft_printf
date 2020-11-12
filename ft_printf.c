/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:32:31 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:12:53 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		flags[FLAG_NUM];
	int		len;

	va_start(ap, s);
	len = 0;
	while (*s)
	{
		if (*s != '%')
			len += ft_write(&s, 1);
		else
		{
			s++;
			flag_init(flags);
			flag_parse(&s, ap, flags);
			len += specifier_parse(&s, ap, flags);
		}
	}
	va_end(ap);
	return (len);
}
