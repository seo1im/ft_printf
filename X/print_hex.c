/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 08:27:44 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:06:14 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "x.h"

static int	zero_process(char *s, int flags[FLAG_NUM])
{
	int i;

	free(s);
	if (flags[WIDTH] < 0)
		return (ft_putstr("", 0));
	i = -1;
	while (++i < flags[WIDTH])
		ft_putchar(' ');
	return (flags[WIDTH]);
}

int			print_hex(va_list ap, int flags[FLAG_NUM], t_bool is_capital)
{
	char		*str;
	char		*s;
	int			len;

	s = ft_itoha(va_arg(ap, unsigned int));
	is_capital ? ft_toupper(s) : 0;
	if (ft_strcmp(s, "0") == 0 && flags[PRECISION] == 0)
		return (zero_process(s, flags));
	flags[EMPTY] = flags[PRECISION] < 0 ? flags[EMPTY] : ' ';
	if (!(str = malloc_width_precision_hex(&flags[WIDTH], &flags[PRECISION],
			ft_strlen(s), s[0] == '-' ? TRUE : FALSE)))
		return (-1);
	make_string_hex(str, s, flags);
	len = ft_putstr(str, flags[WIDTH]);
	free(str);
	return (len);
}
