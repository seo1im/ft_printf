/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 10:04:38 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:11:04 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "per.h"

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
		str[i++] = flags[EMPTY];
}

int				print_percent(int flags[FLAG_NUM])
{
	char	*str;
	int		len;

	flags[EMPTY] = flags[LEFT] ? ' ' : flags[EMPTY];
	if (!(str = malloc_width(&flags[WIDTH])))
		return (-1);
	make_string(str, '%', flags);
	len = ft_putstr(str, flags[WIDTH]);
	free(str);
	return (len);
}
