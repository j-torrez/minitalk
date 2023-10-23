/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:39 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 17:11:09 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
    unsigned char d = 'Z';
    if (ft_isalpha(d) == 1)
    {
        printf("Belongs to Alpha");
    }
    else
    {
        printf("Doesn't belong Alpha");
    }
}   */

/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c = 'B';
    if (isalpha(c))
    {
        printf("%c is an alphabet", c);
    }
    else
    {
        printf("%c is not an alpha",c);
    }
}
*/
