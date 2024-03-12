 #include<stdio.h>
#include<stdlib.h>
 struct node{
    int data ;
    struct node* next;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL )
    {
       printf(" element %d\n" , ptr->data);
       
    }
} 

int main(){
    struct node*head;
    struct node*second;
    struct node*third;

    //allocate memory for the node in linked list
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    
    //link first and second nodes 
    head->data=7;
    head->next = second;

    //link second and third  nodes 
    second->data=11;
    second->next = third ;

    //terminate the list at the third node  
    third->data=66;
    third->next = NULL ;

    linkedlisttraversal(head);
    return 0;
}
