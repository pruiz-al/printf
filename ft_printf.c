/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-al <pruiz-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:47:40 by pruiz-al          #+#    #+#             */
/*   Updated: 2024/07/19 14:25:39 by pruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checker(char c, va_list arg)
{
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == 'i' || c == 'd')
		return (ft_print_putnbr(va_arg(arg, int)));
	if (c == 'x' || c == 'X')
		return (ft_print_hexa(va_arg(arg, unsigned int), c));
	if (c == 'u')
		return (ft_print_unsigned(va_arg(arg, unsigned int)));
	if (c == 'p')
		return (ft_print_putvoid(va_arg(arg, unsigned long int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		c;

	va_start(arg, str);
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			c += ft_checker(str[i], arg);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			c++;
		}
	}
	va_end(arg);
	return (c);
}
