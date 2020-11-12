/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 08:43:49 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:12:15 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int	word_len(long long n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

static void	set_word(char *str, long long n, int pos)
{
	long long x;

	if (n == 0)
		return ;
	x = n % 16;
	*(str + pos) = x >= 10 ? 'a' + (x - 10) : x + '0';
	set_word(str, n / 16, pos - 1);
}

char		*ft_itoha(long long n)
{
	char		*str;
	int			len;

	len = word_len(n);
	if ((str = malloc(sizeof(char) * (len + 1))) == 0)
		return (0);
	if (n == 0)
		*str = '0';
	set_word(str, n, len - 1);
	*(str + len) = 0;
	return (str);
}
