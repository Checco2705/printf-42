/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffebbrar <ffebbrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:49:17 by ffebbrar          #+#    #+#             */
/*   Updated: 2024/01/27 19:08:54 by ffebbrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_putpointer(unsigned long long ptr);
int	ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnumb(int n);
int	ft_putesa(unsigned int n, const char type);
int	ft_putuns(unsigned int n);

#endif