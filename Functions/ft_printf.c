/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:37:52 by diegrod2          #+#    #+#             */
/*   Updated: 2024/11/05 12:37:52 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_str(va_list args, const char enter_str)
{
	int		len;

	len = 0;
	if (enter_str == 'c')
		len += ft_printf_putchar(va_arg(args, int));
	else if (enter_str == 's')
		len += ft_printf_putstr(va_arg(args, char *));
	else if (enter_str == 'd' || enter_str == 'i')
		len += ft_printf_putnbr(va_arg(args, int));
	else if (enter_str == 'u')
		len += ft_printf_putunbr(va_arg(args, unsigned int));
	else if (enter_str == 'x' || enter_str == 'X')
		len += ft_printf_puthex(va_arg(args, unsigned int), enter_str);
	else if (enter_str == 'p')
		len += ft_printf_putptr(va_arg(args, void * ));
	else if (enter_str == '%')
		len += ft_printf_putchar('%');
	return (len);
}

int	ft_printf(char const *enter_str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, enter_str);
	while (enter_str[i])
	{
		if (enter_str[i] == '%' && enter_str[i + 1])
		{
			len += ft_enter_str(args, enter_str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(enter_str[i]);
		i++;
	}
	va_end(args);
	return (len);
}