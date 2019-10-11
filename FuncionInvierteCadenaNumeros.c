#include <stdio.h>
#include <stdlib.h>
#define lim 10

void Captura (int ArrNum[lim]);
void Imprime (int ArrNum[lim]);
void Invierte (int ArrNum[lim]);

int main()
{
    int ArrNum[lim];
    printf("Digite los numero que iran dentro del arreglo.\n");
    printf("\n");
    Captura(ArrNum);
    Imprime(ArrNum);
    printf("\nEl arreglo invertido es:\n");
    Invierte(ArrNum);
    Imprime(ArrNum);
    return 0;
}

void Captura (int ArrNum[lim])
{
    for(int cont=0; cont<lim; cont++)
    {
        scanf("%d", &ArrNum[cont]);
    }
    printf("\n");
}

void Imprime (int ArrNum[lim])
{
    for(int cont=0; cont<lim; cont++)
    {
        printf("[%d] ", ArrNum[cont]);
    }
}

void Invierte (int ArrNum[lim])
{
    int aux, inicio=0;
    for(int fin=lim-1; fin>=(lim/2); fin--)
    {
        aux=ArrNum[fin];
        ArrNum[fin]=ArrNum[inicio];
        ArrNum[inicio]=aux;
        inicio++;
    }
}
