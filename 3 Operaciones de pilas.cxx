#include "stdio.h"
//operaciones que podemos hacer push(),pop(),peek(),isFull(),isEmpty()

int MAXSIZE = 8;
int stack[8];
int top = -1;

int EstaVacio()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int EstaLleno()
{
    if (top == MAXSIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    return stack[top];
}
int pop()
{
    int data;
    if (!EstaVacio())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("cloud not retrieve data, stack is empty");
    }
}
int push(int data)
{
    if (!EstaLleno())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("could not isert data, stack is full");
    }
}
int main()
{
    push(3);
    push(5);
    push(2);
    push(8);
    push(1);

    printf("elementos en top del stack: %d\n", peek());
    printf("elementos: \n");

    //Imprime el stack de datos

    while (!EstaVacio())
    {
        int data = pop();
        printf("%d\n", data);
    }

    printf("stack esta lleno: %s\n", EstaLleno() ? "true" : "false");
    printf("stack esta vacio: %s\n", EstaVacio() ? "true" : "false");

    return 0;

