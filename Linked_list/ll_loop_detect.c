// Code to find a loop in linked list 
//⭐ PART 2 — Floyd’s Cycle Detection Algorithm
//This is basically the “two runners on a circular track” philosophy.

// Why does this work?
// Imagine two runners on a circular track.
// If one runs faster, they will eventually catch the slower one, no matter where they started.

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
 struct node* detect_loop(struct node* head)
 {
     //loop when slow meets head. as if loop means circular so will meets
     struct node* slow=head;
     struct node* fast=head;
     while(fast!=NULL && fast->next!=NULL)
     {
         slow=slow->next;
         fast= fast->next->next;
         
         if(slow==fast)
         return slow; // meeting loop
        
     }
        return NULL; // no loop find   
 }

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
push_front(&head,2);
push_front(&head,8);
push_front(&head,9);
 print_list(head);

 // Create a loop
    struct node* temp = head;
 
//  while (temp->next->next != NULL)
//         temp = temp->next;   // reach  2nd last node

    while (temp->next != NULL)
        temp = temp->next;   // reach last node

    temp->next = head->next->next;   // loop back to 3rd node

    struct node* loop = detect_loop(head);

    if (loop)
        printf("\nLoop detected at node with data: %d\n", loop->data);
    else
        printf("\nNo loop found\n");


  return 0;
}


// O/P: 

// Linked list is: 9-->8-->2-->6-->5-->4-->3-->2-->1-->
// Loop detected at node with data: 3

//next comment output

// Linked list is: 9-->8-->2-->6-->5-->4-->3-->2-->1-->
// Loop detected at node with data: 2
