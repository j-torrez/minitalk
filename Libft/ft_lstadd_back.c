/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:40:42 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 12:42:34 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lst: The address of a pointer to the first link of the list
    new: The address of a pointer to the node to be added to the list
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
/*
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
}
*/
