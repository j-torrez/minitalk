/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:44:39 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 12:45:40 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
    *lst: The addesss of a pointer to a node.
    f: The address of the function used to iterate on the list
*/
/* if you use (ptr != 0) the last node will be processed
    if you use (ptr -> next != 0) the last node will be skipped*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	if (!lst)
		return ;
	while (ptr != 0)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}
