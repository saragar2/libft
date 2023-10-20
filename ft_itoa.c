#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "libft.h"

char	*moldaux(int n, size_t len, int sol, int res, char *aux)
{
	while (len > 0)
        {
                sol = res % 10;
                res = res / 10;
                aux[len--] = (char)sol + '0';
        }
        if (n > 0)
                aux[len] = (char)res + '0';
	return (aux);
}
size_t	newlen(int res)
{
	int	len;

	len = 1;
	while (res / 10 != 0)
        	{
                	res = res / 10;
                	len++;
        	}
	return(len);
}
char *ft_itoa(int n)
{
        char            *aux;
        size_t          len;
        int             res;
        int             sol;

	sol = 0;
        res = n;
        len = newlen(res);
        if (n < 0)
                len += 1;
        aux = malloc(len + 1);
	if (!aux)
		return (NULL);
	if (n < 0)
	{
		res *= -1;
		aux[0] = '-';
	}
        aux[len--] = '\0';
	moldaux(n, len, sol, res, aux);
        return(aux);
}
int     main()
{
        char *res = ft_itoa(-845623);
        printf("%s", res);
        return(0);
}
