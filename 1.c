#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int number = 0;
    int dim = 0;
    printf("SYD\n");
    FILE *file = fopen("./syd.txt", "r");
    if (NULL == file)
    {
        printf("Error opening   file: \n");
        return 0;
    }
    else
    {
        printf("成功\n");
    }
    fseek(file, 0, SEEK_END);
    int line = (int)ftell(file);
    printf ("%d\n", line);
    char *str = (char*)malloc(line + 1);
    while (number <= line)
    {
        fseek(file, number, SEEK_END);
        dim = (int)ftell(file);
        printf ("%d\n",dim);
        printf ("%s\n", str);
        number += dim;
        
    }
    printf ("\n");
    fclose(file);
    return 0;
}
