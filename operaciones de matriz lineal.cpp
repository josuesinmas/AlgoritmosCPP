#include"stdio.h"
using namespace std;
int OperacionTransversal(){
    int MatrizLineal[] = {1,2,5,7,6};
    int Objeto = 10, k = 3, n = 5;
    int i = 0, j = n;
    printf("los elementos originales de la matriz son :\n");
    for (int i = 0; i < n; i++){
        printf("MatrizLineal[%d] = %d \n", i, MatrizLineal[i]);
    }
}
int OperacionIncercion(){
    int MatrizLineal[] = {2,3,45,4,3};
    int Objeto = 10, k = 3, n = 5; 
    int i = 0, j = n;
    printf("los elementos originales de la matriz son :\n");
    for (int i = 0; i < n; i++){
        printf("MatrizLineal[%d] = %d \n", i, MatrizLineal[i]);
    }
    n = n +1;
    while( j >= k ){
        MatrizLineal[j+1] = MatrizLineal[j];
        j = j - 1 ;
    }
    MatrizLineal[k] = Objeto;
    printf("los elementos del array despues de la insercion :\n");
    for (int i = 0; i<n; i++){
        printf("MatrizLineal[%d] = %d \n", i, MatrizLineal[i]);
    }
}
int main(){
    
}
