/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 08:28:12 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:06:29 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef X_H
# define X_H
# include "flag.h"

char	*malloc_width_precision_hex(int *width, int *precision,
										int len, int is_neg);
void	make_string_hex(char *str, char *s, int flags[FLAG_NUM]);
int		print_hex(va_list ap, int flags[FLAG_NUM], t_bool is_capital);

#endif
