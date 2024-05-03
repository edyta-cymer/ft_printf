/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_specifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecymer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:43:33 by ecymer            #+#    #+#             */
/*   Updated: 2024/05/02 20:43:36 by ecymer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	u_specifier(unsigned int number)
{
	int	len;
	int	new_num;

	len = 0;
	new_num = 0;
	if (number == 0)
		return (write(1, "0", 1));
	if (number > 9)
		len += id_specifier(number / 10);
	new_num = (number % 10) + '0';
	len += write(1, &new_num, 1);
	return (len);
}
