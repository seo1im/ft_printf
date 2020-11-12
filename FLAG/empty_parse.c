/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:40:43 by seolim            #+#    #+#             */
/*   Updated: 2020/07/25 11:55:21 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flag.h"

void	empty_parse(const char **s, int flags[FLAG_NUM])
{
	const char *str;

	str = *s;
	str++;
	*s = str;
	flags[EMPTY] = '0';
}
