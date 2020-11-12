/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 12:04:48 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:05:40 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "x.h"

static void	width_zero(int *width, int *precision, int len, int is_neg)
{
	if (*precision < 0)
	{
		*precision = 0;
		*width = len;
	}
	else
	{
		*precision = *precision < len - is_neg ?
					0 : *precision - (len - is_neg);
		*width = len + *precision;
	}
}

static void	width_nonzero(int *width, int *precision, int len, int is_neg)
{
	if (*precision < 0)
	{
		*precision = 0;
		*width = *width < len ? len : *width;
	}
	else
	{
		*precision = *precision < len - is_neg ?
					0 : *precision - (len - is_neg);
		*width = len + *precision < *width ? *width : len + *precision;
	}
}

char		*malloc_width_precision_hex(int *width, int *precision,
										int len, int is_neg)
{
	char *str;

	if (*width < 0)
		width_zero(width, precision, len, is_neg);
	else
		width_nonzero(width, precision, len, is_neg);
	if (!(str = malloc(sizeof(char) * *width + 1)))
		return (NULL);
	return (str);
}
