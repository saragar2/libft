#include "libf t.h"

int	errorcode(char const *s1, char const *set)
{
	if (!s1 || !set)
		return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	//para el codigo de errores, hay que crear un if donde la condicion sea la funcion auxiliar. si es == 0 , va a devolver null.
	//la funcion auxiliar constará de diversas condiciones donde se revisará cada una de las problematicas posibles, y si se cumple alguna de ellas, se devolverá 0. sino, 1.
        size_t  i;
        size_t  j;
        int     k;
        int     len;
        char    *res;

        i = 0;
        j = ft_strlen(s1) - 1;
        k = 0;
	if (errorcode(s1, set) == 0)
		return(NULL);
        while (ft_strchr(set, s1[i]) && i < j)
                i++;
        while (ft_strchr(set, s1[j]) && j > i)
                j--;
        len = j - i + 1;
        res = malloc((len + 1) * sizeof(char));
        if (!res)
                return (NULL);
        while (k < len)
                res[k++] = s1[i++];
        res[k] = '\0';
        return (res);
}
/*int     main()
{
        char *res = ft_strtrim("holoa bueho", "ho");
        printf("%s", res);
        free(res);
        return (0);
}*/
