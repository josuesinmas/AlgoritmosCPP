#include"stdio.h"
using namespace std;
void InsetFirst(int key, int data)
{
    //creamos un link
        struct node *link = (struct node*) malloc(sizeof(struct
        node));
        link->key =key;
        link->data =data;

        if(isEmpty())
        {//creamos el last link
            last = link;

        }else{
            //actualizamos primero prev link
            head->prev =link;
        }
        //point it to old first link
        link->next = head;
        //poin first to new first link
        head=link;
        
}
void OperacionBorrado(){
    struct node* DeleteFirst(){
        struct node *tenplink = head;
        if(head->next == NULL){
            last = NULL
        }else{
            head->next->prev = NULL;
        }
        head = head->next;

        //retor the deleted link
        return templink;
    }

}
int main()
{
    return 0;
}
