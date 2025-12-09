// Middle = fast moves 2x
// 1/3rd = fast moves 3x
// 1/4th = fast moves 4x

// So the slow pointer moves one step, fast pointer moves three or four steps.
// Slow pointer’s position when fast pointer hits the end gives 1/3rd or 1/4th.

// ❗ Why does this work?

// Think of a linked list as a racetrack.

// Slow = speed 1
// Fast = speed K (K = 2, 3, 4...)

// When the fast runner finishes the race, slow runner has completed 1/K of it.

// Example with length = 12:


// Code to find  a linked list 1/3, 1/4 etc  element
//approach: move fast pointer 3x or 4x than slow pointer
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
    while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL) // note more condition added for fast->next
    {
        slow=slow->next;
        // fast=fast->next->next; // for middle
        fast=fast->next->next->next; // for 1/3rd
        // fast=fast->next->next->next->next; // for 1/4th
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
  printf("\n 1/3rd Element Pointer is %p",middle);
  printf("\n 1/3rd Element value  is %d",(*middle).data);
  

  return 0;
}




// O/P: 

// Linked list is: 9-->8-->7-->6-->5-->4-->3-->2-->1-->
// Middle Element Pointer is 0x57d0084249b0
// Middle Element value  is 6


