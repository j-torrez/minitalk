/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:41:46 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 17:05:17 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	i = 0;
	character = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == character)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "Hello, World!";
	char *result;

	result = ft_memchr(str, 'W', strlen(str));
	if (result != NULL)
		printf("Character found: %c\n", *result);
	else
		printf("Character not found\n");

	return 0;
}   */
