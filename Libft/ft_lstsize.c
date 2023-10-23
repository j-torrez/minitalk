/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:40:14 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 11:42:33 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
lst: The beginning of the list.
Return: The length of the list.
*/
int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*ptr;

	ptr = 0;
	i = 0;
	ptr = lst;
	if (!lst)
		return (0);
	while (ptr != 0)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
