/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putbnr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:57:31 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/31 16:57:31 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putbnr(int n)
{
	int			len;
	char	num;

	len = 0;
	if (n == -2147483648)
		return (ft_printf_putstr("-2147483648"));
	if (n < 0)
	{
		len += ft_printf_putchar('-');
		n = -n;
	}
	if (n >= 10)
		len += ft_printf_putnbr(n / 10);
	num = n % 10 + '0';
	len += ft_printf_putchar(num);
	return (len);
}