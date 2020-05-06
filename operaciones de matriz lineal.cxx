#include"stdio.h"
#include"iostream"
using namespace std;

//ya hay librerias que nos ahorraria todos estos algoritmos, pero no hay que olvidar los origenes de todo 

int MatrizLineal[] = {1,2,5,7,6}; //creamos las variables que vamos a utilizar en las operaciones
int Objeto = 10, k = 3, n = 5;
int i = 0, j = n;

void MatrizSinModificar()// cree esta funcion para no repetir el codigo
{
    printf ("los elementos originales de la matriz son :\n");
    for (int i = 0; i < n; i++){
        printf ("MatrizLineal[%d] = %d \n", i, MatrizLineal[i]);
    }

}
void OperacionTransversal()
{
    MatrizSinModificar();
   
}
void OperacionIncercion()
{
    MatrizSinModificar();

    //inicio del algoritmo
    n = n + 1;
    while( j >= k )
    {
        MatrizLineal[j+1] = MatrizLineal[j];
        j = j - 1 ;
    }
    MatrizLineal[k] = Objeto;
    //final

    printf("los elementos del array despues de la insercion :\n");
    for (int i = 0; i<n; i++)
    {
        printf("MatrizLineal[%d] = %d \n", i, MatrizLineal[i]);
    }
}

void OperacionBorrado()
{
    MatrizSinModificar();
    //inicio
    j = k;
    while( j < n )
    {
        MatrizLineal[j+1] = MatrizLineal[j];
        j = j + 1 ;
    }
    //final
}

void OperacionBusqueda()
{
    MatrizSinModificar();
    //inicio
    while (j<n)
    {
        if (MatrizLineal[j] == Objeto)
        {
            break;

        }
        j = j + 1;
    }
    //final
    printf("elemento encontrado : %d en la posicion %d\n", Objeto, j + i);

}
void operacionActualizacion()
{
    MatrizSinModificar();
    //inicio
    MatrizLineal[k-1]= Objeto;
    //final
    printf("elementos de la matriz despues de la actualizacion : \n");
    for (int i = 0; i < n; i++)
    {
        printf("MatrizLineal[%d] = %d \n", i, MatrizLineal[i]);
    }
    
}
int main(){
    int x;
    cin>>x;
    return 0;
}
