/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:41:03 by seolim            #+#    #+#             */
/*   Updated: 2020/07/25 10:58:48 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flag.h"

void	width_parse(const char **s, int flags[FLAG_NUM])
{
	const char *str;

	str = *s;
	flags[WIDTH] = ft_atoi(str);
	while (ft_is_num(*str))
		str++;
	*s = str;
}
