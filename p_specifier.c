/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_specifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:44:43 by ecymer            #+#    #+#             */
/*   Updated: 2024/05/02 20:44:48 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_ptr(unsigned long c)
{
	int		len;
	char	*small_hex;

	small_hex = "0123456789abcdef";
	len = 0;
	if (c > 15)
	{
		len += print_ptr(c / 16);
	}
	len += ft_putchar(small_hex[c % 16]);
	return (len);
}

int	p_specifier(void *adress)
{
	int	len;

	len = 0;
	if (adress == 0)
		return (write(1, "(nil)", 5));
	else
	{
		len += write(1, "0x", 2);
		len += print_ptr((unsigned long)adress);
	}
	return (len);
}
