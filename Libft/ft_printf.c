/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <jtorrez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:30:53 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/06/21 18:25:33 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cases( const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, unsigned long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_hexlower(va_arg(args, int)));
	else if (format == 'X')
		return (ft_hexupper(va_arg(args, int)));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, format);
	if (!format)
		return (-1);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_cases(format[++i], arg);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	int res = ft_printf(0);
	printf("%d\n", res);
	
	// char str[] ="Hello World";
	int number = 12345;
	int result;
	int result1; 

	result = ft_printf("My implementation: %d\n", number);
	printf("My implementation: Numbers of bytes: %d\n", result);

	result1 = printf("Oringinal Printf result: %d\n", number);
	printf("Original count character printf: %d\n", result);
	return 0;
}	*/	
