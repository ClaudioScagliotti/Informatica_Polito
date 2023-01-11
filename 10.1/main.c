#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  /*  int a, b, c;

    a= atoi(argv[1]); b=atoi(argv[2]);
    if (a<= 10000 && a >= 10000 && b<= 10000 && b >= 10000)
    {
       c= a+b;
       printf("La somma dei due numeri è %d \n",c);
    }
    else
        printf("I numeri immessi non sono nell'intervallo tra -10000 e +10000\n"); */
    int i;
	 printf("argc=%d\n",argc);
	 for(i=0;i < argc;++i)
	   printf("argv[%d]:=%s\n",i,argv[i]);
    return 0;
}
