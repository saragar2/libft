/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <saragar2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:47:36 by saragar2          #+#    #+#             */
/*   Updated: 2023/10/09 12:11:14 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*nodo;

	nodo = lst;
	cont = 0;
	if (!lst)
		return(0);
	while (nodo != NULL)
	{
		cont++;
		nodo = nodo -> next;
	}
	return (cont);
}
