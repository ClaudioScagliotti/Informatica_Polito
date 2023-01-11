#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
int main()
{
int i, vbase[N], vex[N], vris[N], x;
printf("Basi:\n");
    for(i=0; i<N; i++)
    {
        printf("v[%d]?\n", i);
        scanf("%d", &x);
        vbase[i]=x;
    }
    printf("\n Esponenti:\n");
        for(i=0; i<N; i++)
    {
        printf("v[%d]?\n", i);
        scanf("%d", &x);
        vex[i]=x;
    }
    for(i=0; i<N; i++)
    {

        vris[i]=pow(vbase[i], vex[i]);
    }
    for(i=0; i<N; i++)
    {
        printf ("vris[%d]= %d \n",i, vris[i]);
    }
    printf("Hello world!\n");
    return 0;
}
