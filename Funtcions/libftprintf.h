/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:41:06 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/31 13:41:06 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef libftprintf_h
# define libftprintf_h

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int ft_putbnr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putchar(char c);



#endif