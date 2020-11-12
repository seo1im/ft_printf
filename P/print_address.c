/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 09:32:44 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:25:47 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p.h"

static int	zero_process(char *s, int flags[FLAG_NUM])
{
	int i;

	free(s);
	if (flags[WIDTH] < 0)
		return (ft_putstr("0x", 2));
	i = -1;
	while (++i < flags[WIDTH] - 2)
		ft_putchar(' ');
	ft_putchar('0');
	ft_putchar('x');
	return (flags[WIDTH]);
}

int			print_address(va_list ap, int flags[FLAG_NUM])
{
	char		*str;
	char		*s;
	int			len;

	s = ft_itoha(va_arg(ap, long long));
	if (ft_strcmp(s, "0") == 0 && flags[PRECISION] == 0)
		return (zero_process(s, flags));
	flags[EMPTY] = flags[PRECISION] < 0 ? flags[EMPTY] : ' ';
	if (!(str = malloc_width_precision_adr(&flags[WIDTH], &flags[PRECISION],
			ft_strlen(s))))
		return (-1);
	make_string_adr(str, s, flags);
	len = ft_putstr(str, flags[WIDTH]);
	free(str);
	return (len);
}
