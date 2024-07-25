/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-al <pruiz-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:01:07 by pruiz-al          #+#    #+#             */
/*   Updated: 2024/07/07 19:43:32 by pruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_upper_lower_hex(char c)
{
	if (c == 'x')
	{
		return ("0123456789abcdef");
	}
	else if (c == 'X')
	{
		return ("0123456789ABCDEF");
	}
	else
	{
		return (NULL);
	}
}

int	ft_print_hexa(unsigned int n, char x)
{
	char	*str;
	int		c;

	str = ft_upper_lower_hex(x);
	c = 1;
	if (n > 15)
	{
		c = c + ft_print_hexa((n / 16), x);
		write(1, &str[n % 16], 1);
	}
	else
	{
		write(1, &str[n], 1);
	}
	return (c);
}
