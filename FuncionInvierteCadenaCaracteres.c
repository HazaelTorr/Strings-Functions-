#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lim 100

void Invierte (char ArrNom[lim]);

int main()
{
    char ArrNom[lim];
    printf("Escriba un Nombre.\n");
    printf("\n");
    fflush(stdin);
    gets(ArrNom);
    fflush(stdin);
    printf("\n");
    printf("\nEl nombre invertido es:\n");
    Invierte(ArrNom);
    return 0;
}

void Invierte (char ArrNom[lim])
{
    int lim2;
    lim2= strlen(ArrNom);
    int aux, inicio=0;
    for(int fin=lim2-1; fin>=(lim2/2); fin--)
    {
        aux=ArrNom[fin];
        ArrNom[fin]=ArrNom[inicio];
        ArrNom[inicio]=aux;
        inicio++;
    }
    puts(ArrNom);
}
