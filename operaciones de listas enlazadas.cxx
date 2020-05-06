#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "stdbool.h"
using namespace std;

struct node{
    int data;
    int key;
    struct node *next;
};

struct node *head = NULL;
struct node *current=NULL;

bool EstaVacio(){
    return head==NULL;
}

int length(){
    int length=0;
    //if list is empty
    if(head==NULL){
        return 0;
    }
    current = head->next;
    while(current !=head){
        length++;
        current=current->next;
    }
    return length;
}


//lista doblemente vinculada o enlazada
void OperacionInsercion(int key, int data)
{
    //creamos un link
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->key = key;
    link->data = data;

    if (EstaVacio())
    {
        head = link;
        link->next=head;
        
    }
    else
    {
        
        //point it to old first link
        link->next=head;
        //poin first to new first link
        head = link;
    }
   
}

//borra el primer objeto
struct node *BorrarPrimero()
{
    //guarda la referecia del primer link
    struct node *tempLink = head;

    //if only one link
    if (head->next == NULL)
    {
        head = NULL;
        return tempLink;
    }
   
    head = head->next;

    //retor the deleted link
    return tempLink;
}

/*
void InsercionAlFinal(int key, int data)
{
    //create a link
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->key = key;
    link->data = data;

    if (EstaVacio())
    {
        last = link;
    }
    else
    {
        //make link a new last link
        last->next = link;
        //mark old last node as prev of new link
        link->prev = last;
    }
    //poin last to new node
    last = link;
}
*/

//lista doblemente enlazada como circular
void IncertarPrimeroEnListaCircular(int key, int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->key = key;
    link->data = data;
    if (EstaVacio())
    {
        head = link;
        head->next = head;
    }
    else
    {
        link->next = head;
        head = link;
    }
}
//borrar el lista circular
struct node *BorrarPrimero()
{
    struct node *tempLink = head;
    if (head->next == head)
    {
        head = NULL;
        return tempLink;
    }
    head = head->next;
    return tempLink;
}
void ImprimirLista()
{
    struct node *ptr = head;
    printf("\n[ ");
    if (head != NULL)
    {
        while (ptr->next != ptr)
        {
            printf("(%d,%d) ", ptr->key, ptr->data);
            ptr = ptr->next;
        }
    }
    printf(" ]");
}

int main()
{
    OperacionInsercion(1,10);
    OperacionInsercion(5,20);
    OperacionInsercion(3,30);
    OperacionInsercion(8,1);
    OperacionInsercion(6,40);
    OperacionInsercion(4,56);

    printf("lista original:  ");
    ImprimirLista();

    while(!EstaVacio()){
        struct node *temp = BorrarPrimero();
        printf("\n Borrado Valor:");
        printf("(%d,%d) ",temp->key,temp->data);
    }
    printf("\nLista despues de borrar todos los objetos: ");

    return 0;
}
