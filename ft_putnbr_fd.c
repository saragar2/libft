/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <saragar2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:15:39 by saragar2          #+#    #+#             */
/*   Updated: 2023/10/06 13:08:56 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
	write(fd, "-2147483648", 11);
    if (n < 0 && n != -2147483648)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    
    if (n < 10 && n != -2147483648)
        ft_putchar_fd(n + '0', fd);
    else
    {
	if (n != -2147483648)
	{
        	ft_putnbr_fd(n / 10, fd);
        	ft_putchar_fd(n % 10 + '0', fd);
	}
    }
}

int	main()
{
	ft_putnbr_fd(2147483647, 1);
	return 0;
}
