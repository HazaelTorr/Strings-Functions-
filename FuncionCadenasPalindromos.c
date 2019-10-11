#include <stdio.h>
#include <string.h>
#define lim 100
/*Ojetivo del programa: Recibe un arreglo de caracteres y regresaun 1 si es palindromo y un
0 si no lo es*/

void Captura(char Palabra[lim]);
void Invierte (char Palabra[lim]);

int main(){
    char ArrPalabra[lim];
    char ArrCopia[lim];
    char ArrPalindromo[lim];
    int i;

    Captura(ArrPalabra);
    for(i=0;i<lim;i++){
        ArrCopia[i] = ArrPalabra[i];
    }
    Invierte(ArrPalabra);
    for(i=0;i<lim;i++){
        ArrPalindromo[i] = ArrPalabra[i];
    }

    if(strcmp(ArrPalindromo,ArrCopia)==0){
        printf("1 Es un Palindromo \n");
    }
    else{
        printf("0 No es un palindromo \n");
    }

    printf("\nHecho por Emanuel Rico Martinez\n");

    return 0;
}

void Captura(char Palabra[lim]){

    printf("Escribe una palabra: \n");
    fflush(stdin);
    gets(Palabra);
    fflush(stdin);
}

void Invierte (char Palabra[lim]){
    int lim2;

    lim2= strlen(Palabra);
    int aux, inicio=0;

    for(int fin=lim2-1; fin>=(lim2/2); fin--){
        aux=Palabra[fin];
        Palabra[fin]=Palabra[inicio];
        Palabra[inicio]=aux;
        inicio++;
    }

    printf("El nombre invertido es: \n");
    puts(Palabra);
}
