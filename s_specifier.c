/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_specifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:43:01 by ecymer            #+#    #+#             */
/*   Updated: 2024/05/02 20:43:07 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	s_specifier(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 's')
	{
		len += ft_putstr(va_arg(args, char *));
	}
	if (format == 'd' || format == 'i')
		len += id_specifier(va_arg(args, int));
	if (format == 'x')
		len += small_x_specifier(va_arg(args, unsigned int));
	if (format == 'X')
		len += large_x_specifier(va_arg(args, unsigned int));
	if (format == 'p')
		len += p_specifier(va_arg(args, void *));
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	if (format == 'u')
		len += u_specifier(va_arg(args, unsigned int));
	if (format == '%')
		return (write(1, "%", 1));
	return (len);
}
