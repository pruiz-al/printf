/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putvoid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-al <pruiz-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:01:29 by pruiz-al          #+#    #+#             */
/*   Updated: 2024/07/08 12:50:38 by pruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_ptr(unsigned long int n)
{
	char	*str;
	int		c;

	str = "0123456789abcdef";
	c = 1;
	if (n > 15)
	{
		c = c + ft_print_ptr((n / 16));
		write(1, &str[n % 16], 1);
	}
	else
	{
		write(1, &str[n], 1);
	}
	return (c);
}

int	ft_print_putvoid(unsigned long int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (ft_putstr("(nil)"));
	}
	else
	{
		ft_putstr("0x");
		i = ft_print_ptr(n);
	}
	return (i + 2);
}
