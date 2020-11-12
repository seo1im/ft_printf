/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 13:11:08 by seolim            #+#    #+#             */
/*   Updated: 2020/07/25 16:00:04 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src);
	if (!(dest = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = -1;
	while (++i < len)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
