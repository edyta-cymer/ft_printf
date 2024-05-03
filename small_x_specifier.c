/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_x_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:45:49 by ecymer            #+#    #+#             */
/*   Updated: 2024/05/02 20:45:52 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	small_x_specifier(unsigned int c)
{
	int		len;
	char	*small_hex;

	small_hex = "0123456789abcdef";
	len = 0;
	if (c > 15)
	{
		len += small_x_specifier(c / 16);
	}
	len += ft_putchar(small_hex[c % 16]);
	return (len);
}
