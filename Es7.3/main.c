#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 100
/*Si scriva un programma C che acquisisca caratteri da tastiera fino alla ricezione di
un “a capo”. Dopo tale evento il programma deve fornire all’utente le seguenti
statistiche:
a. il numero di caratteri introdotti;
b. il numero di caratteri alfabetici;
c. il numero di caratteri maiuscoli;
d. il numero di cifre decimali
e. il numero di caratteri di spaziatura;
f. Il numero di parole digitate, dove per parola si intende una sequenza di
caratteri alfabetici contigui (“ciao 123 mondo !” dà 2 parole).
*/
int main()
{
    int lunghezza=0, lettere=0, cM=0, cif=0, spazi=0, i;
    char car[N];
    printf("Inserisci stringa:\n");
    scanf("%s", car);
    lunghezza=strlen(car);
    for(i=0; i<lunghezza; i++)
    {
    if(isalpha(car[i]))
    lettere++;
    if(isupper(car[i]))
    cM++;
    if(isdigit(car[i]))
    cif++;
    if(isspace(car[i]))
    spazi++;
    }



    printf("Lunghezza:%d\n", lunghezza);
    printf("Lettere:%d\n", lettere);
    printf("Lettere Maiuscole:%d\n", cM);
    printf("Numeri:%d\n", cif);
    printf("Spazi:%d\n", spazi);
    return 0;
}
