#include <stdio.h>
#include <stdlib.h>


   struct node{
    int data ;
    struct node *nextPtr;

};
void countNodes (struct node *head ){
    int counter=0;
    if (head==NULL){
        printf ("linked list does not have elements !!! ");
    }
    struct node *ptr =NULL;
    ptr = head ;
    while (ptr != NULL){
        counter = counter +1 ;
        ptr =ptr->nextPtr ;

    }
    printf("%d",counter );

}
int main(){
    struct node *head = malloc(sizeof(struct node ));
    head->data = 3 ;
    head->nextPtr=NULL;

    struct node *currentPtr = malloc (sizeof(struct node));
    currentPtr->data=22;
    currentPtr->nextPtr=NULL;
    head->nextPtr=currentPtr;

    currentPtr = malloc (sizeof(struct node));
    currentPtr->data=22;
    currentPtr->nextPtr=NULL;

    head->nextPtr->nextPtr= currentPtr;

    currentPtr = malloc (sizeof(struct node));
    currentPtr->data=22;
    currentPtr->nextPtr=NULL;
    
    head->nextPtr->nextPtr->nextPtr= currentPtr;
    
    printf("The number of the elements in the linked list is : \n ");
    countNodes(head);
    return 0 ;
}
