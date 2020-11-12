/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 12:08:29 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:10:15 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p.h"

static int	string_copy(char *str, char *s, int len, int start)
{
	int i;

	i = 0;
	while (i < len)
	{
		str[start + i] = s[i];
		i++;
	}
	return (i);
}

static char	*precision_control(char *s, int precision)
{
	char	*new_s;
	int		len;
	int		i;
	int		is_neg;

	len = ft_strlen(s);
	is_neg = s[0] == '-' ? TRUE : FALSE;
	if (!(new_s = malloc(sizeof(char) * (len + precision))))
		return (NULL);
	i = 0;
	if (is_neg)
		new_s[i++] = '-';
	while (i < precision + is_neg)
		new_s[i++] = '0';
	i += string_copy(new_s, (s + is_neg), len - is_neg, i);
	new_s[i] = 0;
	free(s);
	return (new_s);
}

static char	*empty_control(char *s, int width)
{
	char	*new_s;
	int		len;
	int		i;
	int		is_neg;

	len = ft_strlen(s);
	is_neg = s[0] == '-' ? TRUE : FALSE;
	if (!(new_s = malloc(sizeof(char) * (width + 1))))
		return (NULL);
	i = 0;
	if (is_neg)
		new_s[i++] = '-';
	while (i < width - len + is_neg)
		new_s[i++] = '0';
	i += string_copy(new_s, (s + is_neg), len - is_neg, i);
	new_s[i] = 0;
	free(s);
	return (new_s);
}

void		make_string_adr(char *str, char *s, int flags[FLAG_NUM])
{
	int		width;
	int		len;
	int		i;

	if (flags[EMPTY] == '0' && flags[PRECISION] == 0)
		s = empty_control(s, flags[WIDTH]);
	else
		s = precision_control(s, flags[PRECISION]);
	len = ft_strlen(s);
	width = flags[WIDTH];
	i = 0;
	if (flags[LEFT])
	{
		i += string_copy(str, "0x", 2, 0);
		i += string_copy(str, s, len, 2);
	}
	else
	{
		width -= string_copy(str, s, len, flags[WIDTH] - len);
		str[--width] = 'x';
		str[--width] = '0';
	}
	while (i < width)
		str[i++] = flags[EMPTY];
	free(s);
}
