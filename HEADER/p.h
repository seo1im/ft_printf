/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 09:32:15 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:09:26 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_H
# define P_H
# include "flag.h"

char	*malloc_width_precision_adr(int *width, int *precision,
										int len);
void	make_string_adr(char *str, char *s, int flags[FLAG_NUM]);
int		print_address(va_list ap, int flags[FLAG_NUM]);

#endif
