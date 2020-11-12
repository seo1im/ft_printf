/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:56:57 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 10:04:55 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECIFIER_H
# define SPECIFIER_H
# include "c.h"
# include "s.h"
# include "di.h"
# include "u.h"
# include "x.h"
# include "p.h"
# include "per.h"

int		specifier_parse(const char **s, va_list ap, int flags[FLAG_NUM]);

#endif
