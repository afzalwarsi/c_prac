// Code to reverse a linked list via Recursion
//Create some nodes first than reverse it.(create node push it and than reverse it using function)

#include <stdio.h>
#include <stdlib.h>
//--- Definition of the linked list node ---
struct node {
    int data;
    struct node* next;
};
//------------------------------------------

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


//--- Function to reverse the linked list ---
// struct node* reverse(struct node** head)
// {
//     struct node *prev=NULL,*cur=*head,*next=NULL;
    
//     while(cur!=NULL)
// {    next=cur->next;  //moved next pointer
//     cur->next=prev;  // changed current next pointer to previous
//     //  moving cur and prev
//     prev= cur;
//     cur=next;
// }   
// *head=prev;
    
// }

struct node* reverse_recursion(struct node* head)
{ //in this use: recursion on head node; via if & else
// if(head ya head->next ==NULl hai to return head); its done to reach 2nd last node
// else: we call recursion function : return head: store it somewhere;
//than  1   2 --->3 
//          h  h->n   .;h=2; h->next=3; h->next->next(connection of3 to other node;)
//aim   1   2 <---3           ; Connection added:  so h->next->next=head; connection reversed
                                    // Remove connection: head->next=NULL
    if(head==NULL || head->next==NULL)
    {return head;   }
    else 
    {
        struct node* new_head = reverse_recursion(head->next);  // passing head ka next
        head->next->next=head;
        head->next= NULL;
    
    return new_head;
    }
}

int main()
{
struct node *head= NULL;
push_front(&head,1);   //pass add of head asto call it by call by reference
// head points to node; so *head points to address// check this
push_front(&head,2);
push_front(&head,3);
push_front(&head,4);
 
  print_list(head);
//   reverse(&head);
struct node* reverse_head = reverse_recursion(head); // this function returns new head of reversed linked list
//head wont change i think? bcz passs by value; check this
//   print_list(head); // head connection has been broken; so only prints 4-->
print_list(reverse_head);  

// to get same list back again do reversal
reverse_head = reverse_recursion(reverse_head);
print_list(reverse_head); 

  return 0;
}


// O/P: 

// Linked list is: 4-->3-->2-->1-->
// Linked list is: 1-->2-->3-->4-->
// Linked list is: 4-->3-->2-->1-->