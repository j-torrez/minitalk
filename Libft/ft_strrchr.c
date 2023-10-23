/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:38:45 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/22 12:48:47 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*By adding 'i' to the base address 's' we move the pointer
to the position just after the last character
of the string which is the null character is located*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = ft_strchr(s, '\0');
	while (temp >= s)
	{
		if (*temp == (unsigned char)c)
			return ((char *)temp);
		temp--;
	}
	return (0);
}
