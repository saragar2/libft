/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <saragar2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:03:30 by saragar2          #+#    #+#             */
/*   Updated: 2023/10/05 12:09:40 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char 	*sol;
	int	i;

	len = strlen(s);
	i = 0;
	sol = malloc(len + 1);
	if (!sol || !s || !f)
		return (NULL);
	while (i < len)
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i] = '\0';
	return (sol);
}

char	onemoreascii(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ('0');
	else
		return (c);
}

int	main()
{
	char *sol = "hello world999";
	printf("%s", ft_strmapi(sol, onemoreascii));
	return (0);
}
