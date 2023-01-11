#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 10
int main()
{
   int i, j,step[N];  /*i indica le righe, j indica le colonne*/
  /* char palude[M][N] = {{'*','*','.','*','.','*','.','.','.','.','*'},
                        {'.','.','*','.','*','.','.','.','*','*','.'},
                        {'*','.','.','.','*','.','*','.','.','.','.'},
                        {'.','*','.','*','.','*','.','*','.','*','.'},
                        {'.','.','*','.','.','.','.','.','*','.','*'}};*/
   char palude[M][N]= {{'*','.','.','*','.','.','.','.','.','.'},
                       {'.','*','.','.','*','*','.','.','*','*'},
                       {'.','.','*','.','.','.','*','.','.','.'},
                       {'.','*','.','*','.','*','.','*','.','*'},
                       {'*','.','.','.','*','.','.','.','*','.'}};

     for(i=0;i<M;i++)
     {
         for(j=0;j<N;j++)
         {
             printf("%c", (palude[i][j]));
         }
         printf("\n");

     }
     for(i=0;i<N;i++)
      {
        step[i]=-1;
      }
     for(j=0, i=0; i<M && step[j]==-1; i++)
    {
        if(palude[i][0]=='*')
        {
            step[j]=i; /*step[j] sara' il vettore da stampare alla fine quando si e' trovato un percorso*/
        }

    }
    if(step[j]==-1) printf("Non c'e' un inizio\n");

    i=step[j];
   for(j=1; j<N; j++)
{
    if(i!=0)
    {
    i--;
    if(palude[i][j]=='*')   /*riga sopra*/
    {
        step[j]=i;
    }
    i++;
    }

    if(palude[i][j]=='*')   /*stessa riga*/
    {
        step[j]=i;
    }
    i++;
    if(palude[i][j]=='*')   /*riga sotto*/
    {
        step[j]=i;
    }


}
  printf("righe seguite:\n");
  for(j=0; j<N; j++)
  {
      printf("%d", step[j]);
  }












    return 0;
}
