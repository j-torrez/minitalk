/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:11 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 17:08:56 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The overall purpose of this calculation is to determine the 
lexicographic ordering of the strings s1 and s2.
If the characters at the corresponding indices 
i in both strings are not equal, the function 
will return a non-zero
value indicating their relative ordering based on the ASCII values.
A positive value indicates s1 is greater, 
a negative value indicates s2 is greater, and 0 indicates equality.*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
