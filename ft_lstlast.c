/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <saragar2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:58:37 by saragar2          #+#    #+#             */
/*   Updated: 2023/10/09 12:07:55 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstlast(t_list *lst)
{
	t_list	*last;
	if (!lst)
		return(NULL)
	while (*lst -> next != NULL)
		last = last -> next;
	return (last);
}
