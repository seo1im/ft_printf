/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:40:57 by seolim            #+#    #+#             */
/*   Updated: 2020/07/25 10:58:36 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flag.h"

void	precision_parse(const char **s, int flags[FLAG_NUM])
{
	const char *str;

	str = *s;
	str++;
	flags[PRECISION] = ft_atoi(str);
	while (ft_is_num(*str))
		str++;
	*s = str;
}
