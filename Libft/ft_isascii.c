/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:37:38 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 16:37:46 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
   unsigned char c;

    c = '9';
    if (isascii(c))
    {
        printf("%c, is ascii", c );
    }
    else
    {
        printf("%c, is not part of ascii", c);
    }
}   */
