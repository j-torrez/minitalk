/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:05:06 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 12:12:36 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* *s: A pointer to a constant string
    *f: A pointer to a function (char (*f) which takes
    an unsigned int and a char as a arguments and return
    char*/

/*
    1.Convert character, adding number according to the index.
    -Add THE ASCII value of characther to
    -char in function F take a character from S and transform that
    character into a new character
    -Store the new character in a new string
    -Return the new string
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	str = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
	{
		return (0);
	}
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
