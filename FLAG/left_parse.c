/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:40:52 by seolim            #+#    #+#             */
/*   Updated: 2020/07/25 10:58:18 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flag.h"

void	left_parse(const char **s, int flags[FLAG_NUM])
{
	const char *str;

	str = *s;
	str++;
	*s = str;
	flags[LEFT] = 1;
}
