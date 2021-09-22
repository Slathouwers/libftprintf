/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:08:45 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/21 10:08:55 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_print_char(t_format *fmt, va_list ap)
{
	if (*fmt->fstr == '%')
		ft_putchar_fd('%', 1);
	else
		ft_putchar_fd((char) va_arg(ap, int), 1);
	fmt->num_printed++;
	fmt->fstr++;
}