/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:50:33 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 11:51:33 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lst: The node to free
    del: The address of the function used to delete
    the content*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == 0)
		return ;
	else
	{
		del(lst->content);
	}
	free(lst);
}
