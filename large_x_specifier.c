/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_x_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:45:19 by ecymer            #+#    #+#             */
/*   Updated: 2024/05/02 20:45:25 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	large_x_specifier(unsigned int c)
{
	int		len;
	char	*large_hex;

	large_hex = "0123456789ABCDEF";
	len = 0;
	if (c > 15)
	{
		len += large_x_specifier(c / 16);
	}
	len += ft_putchar(large_hex[c % 16]);
	return (len);
}
