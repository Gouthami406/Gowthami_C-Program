#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *name;
    name=malloc(14);
    name=realloc(name,100);
    strcpy(name,"gouthami");
    printf("%s\n",name);
    free(name);
    return 0;
}
