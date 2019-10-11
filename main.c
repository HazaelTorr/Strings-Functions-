#include <stdio.h>
#include <string.h>
#define N 10

/*Objetivo del programa: Recibir un arreglo de tamaño N y un numero dado por el usuario,
el programa debera buscar el numero en el arreglo y regresar la posicion en la que se
encuentra y en caso de no encontrarse regresar un -1*/

void ImpArrOri(int Arr[N]);
void Captura(int *valor);
int Buscar(int Arr[N],int valor);
void Imprime (int res);
void Rellena (int Arr[N]);

int main()
{
    int Nums[N];
    int valor, res;
    Captura(&valor);
    Rellena(Nums);
    ImpArrOri(Nums);
    res = Buscar(Nums,valor);
    Imprime(res);
    return 0;
}

void Rellena (int Arr[N])
{
    int i;
    printf("Inserte los valores del arreglo de 10 separados por espacio.\n");
    for(i=0; i<N; i++)
    {
        scanf("%d", &Arr[i]);
    }
}

void ImpArrOri (int Arr[N])
{
    int i;
    printf("Arreglo original: \n");
    for(i=0;i<N;i++)
    {
        printf("%d ",Arr[i]);
    }
}

void Captura(int *valor)
{

    printf("Que numero quieres buscar?\n");
    scanf("%d",&*valor);
    printf("\nEl numero que ingresaste fue: %d\n\n",*valor);
}

int Buscar(int Arr[N],int valor)
{                                   //Esta funcion recorre el arreglo y en la condicion del if
    int i;                          //aclaro que si encuentra el valor que digito el usuario
                                    //regrese la posicion en i
    for(i=0;i<N;i++)
    {
        if(Arr[i]==valor)
        {
            return (i);
        }
    }

    return (-1);
}

void Imprime (int res)
{
    if(res!=-1)
    {
        printf("\nEl numero se encuentra en la posicion: %d",res+1);
    }
    else
    {
        printf("\n\n-1 En ninguna posicion del arreglo se encontro el numero");
    }
}
