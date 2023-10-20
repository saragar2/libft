/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:15:02 by saragar2          #+#    #+#             */
/*   Updated: 2023/10/19 21:16:05 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (!lst || !del)
		 return;
	i = *lst;
	while (i)
	{
		del(i-> content);
		free(i);
		i = i-> next;
	}
	*lst = NULL;
}
