/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 12:07:39 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:10:31 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p.h"

static void	width_zero(int *width, int *precision, int len)
{
	if (*precision < 0)
	{
		*precision = 0;
		*width = len + 2;
	}
	else
	{
		*precision = *precision < len ?
					0 : *precision - len;
		*width = len + *precision + 2;
	}
}

static void	width_nonzero(int *width, int *precision, int len)
{
	if (*precision < 0)
	{
		*precision = 0;
		*width = *width < len + 2 ? len + 2 : *width;
	}
	else
	{
		*precision = *precision < len ?
					0 : *precision - len;
		*width = len + *precision + 2 < *width ? *width : len + *precision + 2;
	}
}

char		*malloc_width_precision_adr(int *width, int *precision,
										int len)
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
