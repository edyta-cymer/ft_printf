/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:06:54 by ecymer            #+#    #+#             */
/*   Updated: 2024/05/02 21:07:10 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	small_x_specifier(unsigned int c);
int	large_x_specifier(unsigned int c);
int	p_specifier(void *adress);
int	u_specifier(unsigned int number);
int	id_specifier(int c);
int	s_specifier(va_list args, char format);
int	ft_putstr(char *c);
int	ft_putchar(char c);

#endif
