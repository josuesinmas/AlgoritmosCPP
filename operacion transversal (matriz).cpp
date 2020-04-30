#include<stdio.h>

int main(){
    int MatrizLineal = {1,2,5,7,6};
    int Objeto = 10, k = 3, n = 5;
    int i = 0, j = n;
    printf("los elementos originales de la matriz son :\n");
    for (int i = 0; i < n; i++){
        printf("MatrizLineal[%d] = %d \n", i, MatrizLineal[i]);
    }
}
