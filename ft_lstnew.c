/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <saragar2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:56:30 by saragar2          #+#    #+#             */
/*   Updated: 2023/10/07 16:08:23 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*i;

	i = malloc(sizeof (t_list));
	if (!i)
		return (0);
	i -> content = content;
	i -> next = NULL;
	return (i);
}

