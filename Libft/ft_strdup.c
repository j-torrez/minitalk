/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:43:15 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 17:14:55 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocate sufficient memory for a copy 
of the string s1, does the copy, and returns a pointer to it*/

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	size;
	char	*copy;

	size = (ft_strlen(s1) + 1);
	copy = (char *)malloc(sizeof(char) * size);
	if (!copy)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}
