/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puthex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:16:10 by diegrod2          #+#    #+#             */
/*   Updated: 2024/11/01 13:31:49 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int	ft_puthex(unsigned long int n, char format)
{
	int		len = 0;
	char	*b;

	if (format == 'x')
		b = "0123456789abcdef";
	else
		b = "0123456789ABCDEF";

	if (n >= 16)
		len += ft_puthex(n / 16, format);
	len += ft_putchar(b[n % 16]);
	return (len);
}