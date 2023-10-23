/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:13:14 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 12:16:50 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == 0 || *lst == 0)
		return ;
	current = *lst;
	next = 0;
	while (current != 0)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = 0;
}
