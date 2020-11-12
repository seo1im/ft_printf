/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:56:10 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 12:13:20 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_H
# define FLAG_H
# include "lib.h"
# define FLAG_NUM 5
# define WIDTH 0
# define PRECISION 1
# define LEFT 2
# define EMPTY 3
# define STAR 4

void	flag_init(int flags[FLAG_NUM]);
void	left_parse(const char **s, int flags[FLAG_NUM]);
void	empty_parse(const char **s, int flags[FLAG_NUM]);
void	width_parse(const char **s, int flags[FLAG_NUM]);
void	precision_parse(const char **s, int flags[FLAG_NUM]);
void	star_parse(const char **s, int flags[FLAG_NUM], va_list ap);
t_bool	flag_parse(const char **s, va_list ap, int flags[FLAG_NUM]);

#endif
