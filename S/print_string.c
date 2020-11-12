/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:22:29 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 11:59:15 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

static int	string_copy(char *str, char *s, int precision, int start)
{
	int i;

	i = 0;
	while (i < precision)
	{
		str[start + i] = s[i];
		i++;
	}
	return (i);
}

static void	make_string(char *str, char *s, int flags[FLAG_NUM])
{
	int width;
	int i;

	width = flags[WIDTH];
	i = 0;
	if (flags[LEFT])
		i = string_copy(str, s, flags[PRECISION], 0);
	else
		width -= string_copy(str, s, flags[PRECISION],
							flags[WIDTH] - flags[PRECISION]);
	while (i < width)
		str[i++] = flags[EMPTY];
}

int			print_string(va_list ap, int flags[FLAG_NUM])
{
	char	*str;
	char	*s;
	int		is_null;
	int		len;

	is_null = FALSE;
	flags[EMPTY] = flags[LEFT] ? ' ' : flags[EMPTY];
	if (!(s = va_arg(ap, char *)))
	{
		if (!(s = ft_strdup("(null)")))
			return (-1);
		is_null = TRUE;
	}
	if (!(str = malloc_width_precision_string(&flags[WIDTH], &flags[PRECISION],
		ft_strlen(s))))
		return (-1);
	make_string(str, s, flags);
	len = ft_putstr(str, flags[WIDTH]);
	free(str);
	is_null ? free(s) : 0;
	return (len);
}
