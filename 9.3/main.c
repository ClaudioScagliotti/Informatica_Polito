#include <stdio.h>
#include <stdlib.h>
struct file {char stp[20+1];
             int orep;
             int minutip;
             char sta[20+1];
             int orea;
             int minutia;};
typedef struct file l;
int main()
{
    FILE *f;
    char nome_file;
    int i;
    printf("Inserisci il nome del file da leggere:\n");
    scanf("%s",nome_file);
    f=fopen("Treni.txt", "r");
    if (f==NULL)
    {
       printf("Errore!");
       return -1;
    }


      while (fscanf(f, "%c %d.%d &c %d.%d ", l.stp, l.orep, l.minutip, l.sta, l.orea, l.minutia)!=EOF)
      {
          printf("%c,%d.%d,%c, %d.%d", l.stp, l.orep, l.minutip, l.sta, l.orea, minutia);
      }


    fclose(f);
    printf("Hello world!\n");
    return 0;
}
