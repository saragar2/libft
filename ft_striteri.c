/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <saragar2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:16:12 by saragar2          #+#    #+#             */
/*   Updated: 2023/10/05 20:56:02 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
        int     i;

        i = 0;
        while (s[i] != '\0')
        {
                f(i, (s + i));
                i++;
        }	
}

static void    onemoreo(unsigned int i, char *s)
{
        if (i % 2 == 0)
                s[i] = '0';
}

int     main()
{
        char *sol = "hello world999";
        ft_striteri(sol, onemoreo);
        return (0);
}
