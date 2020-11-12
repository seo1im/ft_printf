/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:42:42 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 11:55:08 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specifier.h"

static int	number_parse(char c, va_list ap, int flags[FLAG_NUM])
{
	int len;

	len = 0;
	if (c == 'd')
		len += print_int(ap, flags);
	if (c == 'i')
		len += print_int(ap, flags);
	if (c == 'u')
		len += print_unsigned_int(ap, flags);
	if (c == 'x')
		len += print_hex(ap, flags, FALSE);
	if (c == 'X')
		len += print_hex(ap, flags, TRUE);
	return (len);
}

static int	string_parse(char c, va_list ap, int flags[FLAG_NUM])
{
	int len;

	len = 0;
	if (c == 'c')
		len += print_char(ap, flags);
	if (c == 's')
		len += print_string(ap, flags);
	if (c == 'p')
		len += print_address(ap, flags);
	if (c == '%')
		len += print_percent(flags);
	return (len);
}

int			specifier_parse(const char **s, va_list ap, int flags[FLAG_NUM])
{
	int			len;
	const char	*str;

	str = *s;
	len = 0;
	if (*str == 'd' || *str == 'u' || *str == 'i' || *str == 'x' || *str == 'X')
	{
		len += number_parse(*str, ap, flags);
		str++;
	}
	else if (*str == 'c' || *str == 's' || *str == 'p' || *str == '%')
	{
		len += string_parse(*str, ap, flags);
		str++;
	}
	*s = str;
	return (len);
}
