/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:52:20 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 11:54:03 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Modify char base on it index, you can also say *str = *str + index
void    modifychar(unsigned int index, char *str)
{
    str[index] = str[index] + index;
}   */

/* We use &s[i] because the function is expecting a pointer to char*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
    char str[] = "Hello";
    printf("Before modify %s\n", str);
    ft_striteri(str, modifychar);
    printf("After: %s\n", str);
    return 0; 
}   */
