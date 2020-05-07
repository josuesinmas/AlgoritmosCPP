#include "iostream"
#include "string.h"
#include "stdlib.h"
#include "stdbool.h"

#define MAX 6
int intArray[MAX];
int front=0;
int rear = -1;
int itemCount = 0;

int peek(){
    return intArray[front];
}
bool isEmpty(){
    return 0;
}