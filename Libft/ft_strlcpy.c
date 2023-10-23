/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:39:42 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 16:57:59 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	char dest[15];
	const char src[] = "Hello, world";
	int result;

	result = ft_strlcpy(dest, src, 13);
	printf("Result: %d", result);

}*/

/*
size_t strlcpy(char *dst, const char *src, size_t size);

int main(void)
{
	char dest[10] = "hi";
	const char *source = "Hello, world!";

	printf("Copying \"%s\" with a buffer size of 10...\n", source);
	size_t copied = strlcpy(dest, source, 10);

	printf("Copied %zu characters: \"%s\"\n", copied, dest);

	return 0;
}

size_t strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len = strlen(src);
	size_t copy_len = (src_len < size) ? src_len : (size - 1);

	strncpy(dst, src, copy_len);
	dst[copy_len] = '\0';

	return src_len;
}   */
