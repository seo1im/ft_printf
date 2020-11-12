/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:55:55 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 11:56:45 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

static void	width_zero(int *width, int *precision, int len)
{
	if (*precision < 0)
	{
		*precision = len;
		*width = len;
	}
	else
	{
		*precision = *precision < len ? *precision : len;
		*width = *precision;
	}
}

static void	width_nonzero(int *width, int *precision, int len)
{
	if (*precision < 0)
	{
		*precision = len;
		*width = *width < len ? len : *width;
	}
	else
	{
		*precision = *precision < len ? *precision : len;
		*width = *width < *precision ? *precision : *width;
	}
}

char		*malloc_width_precision_string(int *width, int *precision, int len)
{
	char *str;

	if (*width < 0)
		width_zero(width, precision, len);
	else
		width_nonzero(width, precision, len);
	if (!(str = malloc(sizeof(char) * *width + 1)))
		return (NULL);
	return (str);
}
