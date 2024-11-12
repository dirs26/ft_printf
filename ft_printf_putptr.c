/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:14:03 by diegrod2          #+#    #+#             */
/*   Updated: 2024/11/01 14:35:28 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putptr(void *ptr)
{
	int	len;

	len = 0;
	if(!ptr)
		return (ft_putstr("(NIL)"));
	len += ft_putstr("0x");
	len += ft_putstr((unsigned long)ptr, 'x');
	return (len);
}