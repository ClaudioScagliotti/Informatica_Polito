#include <stdio.h>
#include <stdlib.h>
#define N 4
int mult(int v[], int n, int x);
int main()
{
    int vett[N], p=0, x, i;
    for (i=0; i<N; i++)
    {
        printf("v[%d]?", i);
        scanf("%d", &x);
        vett[i]=x;
      /*  printf("v[%d]= %d\n", i, vett[i]); */
    }

    printf("Inserisci il moltiplicatore:\n");
    scanf("%d", &x);
    for (i=0; i<N; i++)
    {
    p= mult(vett, i, x);
        printf("v[%d]= %d\n",i, p);
    }
    printf("\n Fine programma\n");
    return 0;
}
int mult(int v[], int n, int x)
{int m;
    m= (v[n]*x);
return m;
}
