/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 08:13:38 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:21:12 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U_H
# define U_H
# include "flag.h"

char	*malloc_width_precision_uint(int *width, int *precision,
										int len, int is_neg);
void	make_string_uint(char *str, char *s, int flags[FLAG_NUM]);
int		print_unsigned_int(va_list ap, int flags[FLAG_NUM]);

#endif
