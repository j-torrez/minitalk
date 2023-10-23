/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:39:01 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 16:51:58 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// bzero erases the data in the n byte of
// the memory starting at the location pointed to by s
//  Example: Hello World, n = 6 --> This will erase World -- Result = Hello
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*newstr;

	newstr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		newstr[i++] = 0;
	}
	return ;
}
/* return is  Not strictly necessary as the function has a void return.*/
/*
int main(void)
{
    char str[50] = "Hello World";
    printf("Before bzero: %s\n", str);
    ft_bzero(str, 11);
    printf("After bzero: %s\n", str);
    return 0;
}   */
