/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-al <pruiz-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:47:43 by pruiz-al          #+#    #+#             */
/*   Updated: 2024/07/19 14:05:33 by pruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_print_hexa(unsigned int n, char x);
int	ft_printf(const char *str, ...);
int	ft_print_putnbr(int n);
int	ft_putchar(char c);
int	countdigits(int n);
int	ft_putstr(char *str);
int	ft_print_putvoid(unsigned long int n);
int	ft_print_unsigned(unsigned int n);

#endif