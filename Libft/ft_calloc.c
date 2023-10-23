/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <jtorrez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:40:12 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/10/08 17:29:56 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The only difference with malloc is that initialize
memory with 0, while malloc
initialize with garbage value
We use function malloc to
calculate the total memory, and then we use ft_bezero to
initialize that total memory
to O.	*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc (count * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (count * size))
	{
		(*(unsigned char *)(ptr + i)) = 0;
		i++;
	}
	return (ptr);
}

/*
Another way to do it is using the function ft_memset.
This function fill with specific value the bytes of memory
ft_memset(memory, 0, count * size) -->
This do the the same function as ft_bzero.*/
