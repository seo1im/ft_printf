/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:32:21 by seolim            #+#    #+#             */
/*   Updated: 2020/07/28 09:04:36 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# define TRUE 1
# define FALSE 0

# include <stdio.h>

typedef int	t_bool;

int		ft_strlen(char *str);
t_bool	ft_is_num_nonzero(char c);
int		ft_write(const char **str, int c);
int		ft_atoi(const char *str);
t_bool	ft_is_num(char c);
int		ft_putchar(char c);
int		ft_putstr(char *str, int len);
char	*ft_strdup(char *src);
char	*ft_itoa(long long n);
int		ft_strcmp(char *s1, char *s2);
char	*ft_itoha(long long n);
void	ft_toupper(char *str);

#endif
