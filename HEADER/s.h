/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:22:36 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:13:01 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_H
# define S_H
# include "specifier.h"

char	*malloc_width_precision_string(int *width, int *precision, int len);
int		print_string(va_list ap, int flags[FLAG_NUM]);

#endif
