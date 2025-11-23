// Code to find  a linked list middle element
// length odd: middle element
// length even: 2 middle elements; we can return either first or second; here we return second middle
// slow/fast pointer approach
//first middle when         (fast start from head->next)
// second middle when           (fast start from head)
//Create some nodes first (create node push it and than find middle using function)

#include <stdio.h>
#include <stdlib.h>
//--- Definition of the linked list node ---
struct node {
    int data;
    struct node* next;
};
// ------------------------------------------

// ------Find middle of linked list function --------------------
// return middle element: via slow, fast pointer
struct node* middle_element(struct node *head)
{
    struct node*slow=head;
    struct node*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    
    
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
push_front(&head,7);
push_front(&head,8);
push_front(&head,9);
  print_list(head);
  
  struct node*middle= middle_element(head); // this return slow pointer
  printf("\nMiddle Element Pointer is %p",middle);
  printf("\nMiddle Element value  is %d",(*middle).data);
  

  return 0;
}


// O/P: 
// Linked list is: 9-->8-->7-->6-->5-->4-->3-->2-->1-->
// Middle Element Pointer is 0x564109b8b990
// Middle Element value  is 5