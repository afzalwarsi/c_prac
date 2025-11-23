// Code to find a loop in linked list 

//Create some nodes first (create node push it and than find middle using function)

#include <stdio.h>
#include <stdlib.h>
//--- Definition of the linked list node ---
struct node {
    int data;
    struct node* next;
};
// ------------------------------------------

// ------Find Loop in linked list: function --------------------


// ------------------------------------------------------------

//---------------push_front and print_list function ----------------------------------

void push_front(struct node** head, int data)  // remember **head not *head; else changes won't reflect in main
// as head is passed by value; so to modify it in function we need to pass its address
{// create node dynamically than push it into linked list via head & tail
   
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
   new_node->data=data;
   new_node->next=NULL;   // initialize next as NULL

   // 2 condition either head=null or not null;
   //Push from begining
   // if not: newnode->next=head; and head=new_node

   if(*head==NULL)
    {
        *head=new_node;
    }
    else{

        new_node->next=*head;
        *head=new_node;
    }

}

void print_list(struct node* head) // traversal it till temp!=NULL and do temp=temp->next
{
    printf("\nLinked list is: ");
    struct node *temp=head;
    while(temp!=NULL)
    {
    printf("%d-->",temp->data);
    temp= temp->next;
    }
}

// ----------------------------------------------------------------------------------------


int main()
{
struct node *head= NULL;
push_front(&head,1);   //pass add of head asto call it by call by reference
// head points to node; so *head points to address// check this
push_front(&head,2);
push_front(&head,3);
push_front(&head,4);
push_front(&head,5);
push_front(&head,6);
push_front(&head,7);
push_front(&head,8);
push_front(&head,9);
  print_list(head);

  return 0;
}


// O/P: 
