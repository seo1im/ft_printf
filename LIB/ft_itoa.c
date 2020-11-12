/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 13:59:01 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 08:45:12 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int	word_len(long long n, long long sign)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (sign < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	set_word(char *str, long long n, int pos, long long sign)
{
	if (n == 0)
		return ;
	*(str + pos) = (n % 10) * sign + '0';
	set_word(str, (n / (10 * sign)), pos - 1, 1);
}

char		*ft_itoa(long long n)
{
	char		*str;
	int			len;
	long long	sign;

	sign = n >= 0 ? 1 : -1;
	len = word_len(n, sign);
	if ((str = malloc(sizeof(char) * (len + 1))) == 0)
		return (0);
	if (n == 0)
		*str = '0';
	set_word(str, n, len - 1, sign);
	if (sign < 0)
		*(str) = '-';
	*(str + len) = 0;
	return (str);
}
