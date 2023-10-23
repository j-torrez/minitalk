/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:44:51 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 11:49:52 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
    first line, new points to the address of first node
    second line, by deferencing lst with *lst, we can modify
    the original pointer itself.  Makes new node the first node of the list.
*/
