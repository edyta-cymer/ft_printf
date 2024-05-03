/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:44:07 by ecymer            #+#    #+#             */
/*   Updated: 2024/05/02 20:44:14 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	id_specifier(int c)
{
	int	len;
	int	new_num;

	len = 0;
	if (c == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	else if (c < 0)
	{
		ft_putchar('-');
		c *= -1;
		len++;
	}
	if (c > 9)
		len += id_specifier(c / 10);
	new_num = c % 10 + '0';
	len += write(1, &new_num, 1);
	return (len);
}
