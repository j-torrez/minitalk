/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <jtorrez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:33:32 by johnbosco         #+#    #+#             */
/*   Updated: 2023/06/15 15:00:43 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_print_decimal (int n)
{
	long num;
	int count;  
	
	num = n;
	count = 0;  
	if (num < 0)
	{
		num *= -1;
		ft_print_char('-');
		count++;
	}
	if (num > 9)
	{
		count += ft_print_decimal(num / 10);
		count += ft_print_decimal(num % 10);
	}
	else
	{
		ft_print_char(num + 48);
	}
	return count;
}	*/
int	ft_putunbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 4294967295)
	{
		i += ft_putchar('4');
		nb = 294967295;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		i += ft_putchar(nb + 48);
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		i += ft_putchar('-');
		i += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		i += ft_putchar(nb + 48);
	}
	return (i);
}
/*
int	main(void)
{
	int number;
	int count; 

	number = 1234;
	count = print_int(number);
	//printf("Number: %d\n", number);

	//printf("Custom Printf: ");
	//ft_print_char('\n');
	printf("Number of character printed: %d\n", count);
	
}	*/
