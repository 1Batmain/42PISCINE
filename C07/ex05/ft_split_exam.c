#include <stdlib.h>

int len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int is_printable(char c)
{
    if (c > ' ' && c <= '~')
           return(1);
    return (0);
}

int is_space(char c)
{
    if ((c >= 11 && c <= 15) || c == ' ')
           return(1);
    return (0);
}

int count_words(char *str)
{
    int printable_tem;
    int i;
    int count;

    count = 0;
    i = 0;
    printable_tem = 0;
    while (str[i])
    {
        while (is_printable(str[i]))
        {
            printable_tem = 1;
            i++;
        }
        while (is_space(str[i]))
        {
            i++;
        }
        if (printable_tem)
            count++;
    }
    return (count);
}

char **split(char *str)
{
    int nb_word;
    char **result;
    int printable_tem;
    int i;
    int j;
    int strlen;

    nb_word = count_words(str);
    result = (char **)malloc(nb_word * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    printable_tem = 0;
    while (i < nb_word * 2)
    {
        j = 0;
        while(is_printable(str[j]))
        {
            printable_tem = 1;
            if (i % 2 == 1)
            {
                if (j == 0)
                {
                    result[i / 2] = (char *)malloc((strlen + 1) * sizeof(char));
                    if (!result[i / 2])
                        return (NULL);
                }
                    result[i / 2][j] = str[j];
            }
                j++;
        }
        if (i % 2 == 1)
            result[i / 2][j] = '\0';
        strlen = j;
        while (is_space(str[j]))
        {
            j++;
        }
        if (i % 2 == 1 || printable_tem == 0)
        str = &str[j];
        if (printable_tem == 1)
            i++;
    }
    result[i / 2] = NULL;
    return (result);
}

#include <stdio.h> 
int main (int ac, char **av)
{
    char **res;
    int i;

    i = 0;
    if (ac >= 1)
    {
        res = split(av[1]);
        while (i <= count_words(av[1]))
        {
            printf("%p ---> %s \n", &res[i], res[i]);
            i++;
        }
    }
}
