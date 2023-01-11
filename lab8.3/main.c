#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
#define M 12
int main()
{
  char s[N], t[N], inte[M]={"0000_minuti" } ;
  int i, j, ore_1_, minuti_1_, ore_2_, minuti_2_, Delta_ora, Delta_minuti, Dist1_00, Dist2_00;
  printf("Dammi il primo orario:\n");
  gets(t);




  for (i=0; i<2; i++)
  {
      if(isdigit(t[i])) {}
        else
        printf("ERRORE 1\n");


  }
  if(t[2]!=':')
   printf("ERRORE 2\n");

   for (i=3; i<5; i++)
  {
      if(isdigit(t[i])){}
        else
        printf("ERRORE 3\n");
  }

  /*Trasformiamo le stringhe di orari in interi*/
  ore_1_= ((t[0]-'0')*10) + (t[1]-'0');
  minuti_1_= ((t[3]-'0')*10) + (t[4]-'0');
  printf("orario_1_ %d:%d\n", ore_1_, minuti_1_);

  while(ore_1_>24 || minuti_1_>59)
  {
    printf("ERRORE DI INSERIMENTO\n");
    printf("Ridammi il primo orario:\n");
    gets(t);
    ore_1_= ((t[0]-'0')*10) + (t[1]-'0');
    minuti_1_= ((t[3]-'0')*10) + (t[4]-'0');


  }




 printf("Dammi il secondo orario:\n");
  gets(s);

      for (i=0; i<2; i++)
  {
      if(isdigit(s[i])) {}
        else
        printf("ERRORE 1\n");


  }
  if(s[2]!=':')
   printf("ERRORE 2\n");

   for (i=3; i<5; i++)
  {
      if(isdigit(s[i])){}
        else
        printf("ERRORE 3\n");
  }

 /*Trasformiamo le stringhe di orari in interi*/
  ore_2_= ((s[0]-'0')*10) + (s[1]-'0');
  minuti_2_= ((s[3]-'0')*10) + (s[4]-'0');
  printf("orario_2_ %d:%d\n", ore_2_, minuti_2_);

    while(ore_2_>24 || minuti_2_>59)
  {
    printf("ERRORE DI INSERIMENTO\n");
    printf("Ridammi il secondo orario:\n");
    gets(s);
    ore_2_= ((s[0]-'0')*10) + (s[1]-'0');
    minuti_2_= ((s[3]-'0')*10) + (s[4]-'0');

  }




  Delta_ora= (ore_1_ - ore_2_);
  Delta_minuti= (minuti_1_ - minuti_2_);


   if (Delta_ora >0)
   {
       printf("Orario_1_ > orario_2_\n");
   }
   if (Delta_ora <0)
   {
      printf("Orario_1_ < orario_2_\n");


    Dist1_00= ((23*60)- (ore_1_*60)) + (60- minuti_1_);
    printf("Distanza dalle 00:00 (1)= %d minuti\n", Dist1_00);
    Dist2_00= ((23*60)- (ore_2_*60)) + (60- minuti_2_);
    printf("Distanza dalle 00:00 (2)= %d minuti\n", Dist2_00 );

   }
    if (Delta_ora==0)
    {
        printf("Ore_1_ = ore_2_\n");
    if (Delta_minuti>0)
        {
        printf("orario_1_ > orario_2_\n");
        }
    if (Delta_minuti<0)
    {
    printf("orario_1_ < orario_2_\n");
    Dist1_00= ((23*60)- (ore_1_*60)) + (60- minuti_1_);
    printf("Distanza dalle 00:00 (1)= %d minuti\n", Dist1_00);
    Dist2_00= ((23*60)- (ore_2_*60)) + (60- minuti_2_);
    printf("Distanza dalle 00:00 (2)= %d minuti\n", Dist2_00 );


    }
    if (Delta_minuti==0)
    {
         printf("orario_1_ = orario_2_\n");
    }
   }


inte[0]= Dist1_00/1000;
inte[1]= abs((Dist1_00-1000)/100);
inte[2]= abs(Dist1_00 - 1000 - ((inte[1]-'0')*100 ));
inte[3]= abs(Dist1_00 - 1000 - (inte[2]-'0')*10-((inte[1]-'0')*100 ));


sprintf(inte, "%s", inte[M]);


    return 0;
}
