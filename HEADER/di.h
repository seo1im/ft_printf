/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 13:42:03 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:00:38 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DI_H
# define DI_H
# include "flag.h"

char	*malloc_width_precision_int(int *width, int *precision,
										int len, int is_neg);
void	make_string_int(char *str, char *s, int flags[FLAG_NUM]);
int		print_int(va_list ap, int flags[FLAG_NUM]);

#endif
