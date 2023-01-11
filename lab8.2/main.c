#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 100
int main()
{
    char s[N];
    int i, L;
    gets(s);
    printf("STRINGA: %s\n", s);
   /* for(i=0; i<N; i++)
    {
    s[i]=toupper(s[i]);
    }*/
    printf("\n******************\n");

    puts(s);
    L=strlen(s);

    printf("\n******************\n");
    for (i=0; i<L; i++)
    {
    if (!isalnum(s[i]))
    {
        s[i]='_';
    }
    if(isdigit(s[i]))
    {
        s[i]= '*';
    }

    }
    puts(s);












    return 0;
}
