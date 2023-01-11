#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 30

int main()
{
    int L, L1, i, p=0, q=0, j=0;
    char s[N], s1[N];
    gets(s);
    printf ("STRINGA:%s\n", s);

    L = strlen(s);
    printf ("La stringa e' lunga %d\n", L);
    for(i=0; i<=L; i++)
    {
    s[i]=toupper(s[i]);
    if(isalpha(s[i]))
    {
        p++;
    }
    if(isdigit(s[i]))
    {
        q++;
    }
    }
    printf("%s\n", s);
    printf("numero di lettere=%d\n", p);
    printf("numero di cifre=%d\n", q);
    for(i=0; i<L; i++)
    {
        s[i]=tolower(s[i]);
    }
    puts(s);

    printf("Dammi una seconda stringa:\n");
    gets(s1);
    L1=strlen(s1);
    for(i=0,j=0; (i<L && j<L1);i++)
    {
    if(s[i]==s1[j])
    {
        j++;
    }
    else
    {
        j=0;
    }



    }
    if(j==L1)
    {
        printf("La parola e' contenuta in s");
    }
    else
    {
       printf("La parola non e' contenuta in s");

    }
























    return 0;
}
