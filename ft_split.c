#include <stdlib.h>

int    ft_count_word(char *str, char charset)
{
    int    i;
    int    count;

    i = 0;
    count = 0;
    if (str[i] == 0)
        return (0);
    while (str[i])
    {
        while (str[i] == charset)
            i++;
        if (str[i] != charset)
        {    
            while (str[i] != charset)
                i++;
            count++;
        }
    }
    return (count);
}

char    *ft_strndup(char *str, int size)
{
    int        i;
    char    *newstr;

    i = 0;
    newstr = malloc(sizeof(char) * (size + 1));
    while (str[i] && i < size)
    {
        newstr[i] = str[i];
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}

char    **out(char **finalstr)
{
    finalstr[0] = 0;
    return (finalstr);
}

char    **ft_split(char *str, char *charset)
{
    char	*charset; 
    char	**finalstr;
    int		i;
    int		j;
    int		size;

    i = 0;
    j = 0;
    size = ft_count_word(str, charset);
    finalstr = malloc(sizeof(char *) * (ft_is_word(str, charset) + 1));
    if (ft_is_word(str, charset) == 0)
        return (out(finalstr));
    while (j < size)
    {
        while (str[i] == charset)
            i++;
        str = str + i;
        i = 0;
        while (str[i] != charset)
            i++;
        finalstr[j++] = ft_strndup(str, i);
        str = str + i;
        i = 0;
    }
    finalstr[j] = 0;
    return (finalstr);
}
