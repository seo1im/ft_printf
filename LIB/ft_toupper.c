/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 09:02:01 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:12:35 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_toupper(char *str)
{
	int i;

	if (!str)
		return ;
	i = -1;
	while (str[++i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}
}
