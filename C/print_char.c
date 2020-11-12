/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 11:01:49 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:25:58 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c.h"

static	char	*malloc_width(int *width)
{
	char *str;

	if (*width == -1)
		*width = 1;
	if (!(str = malloc(sizeof(char) * *width + 1)))
		return (NULL);
	str[*width] = '\0';
	return (str);
}

static	void	make_string(char *str, char c, int flags[FLAG_NUM])
{
	int width;
	int i;

	width = flags[WIDTH];
	i = 0;
	if (flags[LEFT])
		str[i++] = c;
	else
		str[--width] = c;
	while (i < width)
		str[i++] = ' ';
}

int				print_char(va_list ap, int flags[FLAG_NUM])
{
	char	*str;
	char	c;
	int		len;

	c = va_arg(ap, int);
	if (!(str = malloc_width(&flags[WIDTH])))
		return (-1);
	make_string(str, c, flags);
	len = ft_putstr(str, flags[WIDTH]);
	free(str);
	return (len);
}
