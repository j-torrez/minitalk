/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:39:28 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 16:56:56 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check wheter dest and source are both NULL.
// Check if there is a posibility to overlap
// Copy in revarse order to avoid overwriting data
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
	{
		return (0);
	}
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char src[] = "Hello World!";
	char dest[20];

	ft_memmove(dest, src, 13);

	printf("Copied string is %s\n", dest);

	return 0;
}   */
/*
int main(void)
{
	char buffers[10] = "abcdefghi";
	ft_memmove(buffers + 3, buffers, 6);
	printf("This is the result %s\n", buffers);
}*/
