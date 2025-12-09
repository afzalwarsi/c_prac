//Linked-list loops are like mischievous little time-warps: the list folds back on itself, and your pointer keeps running laps like a marathoner who forgot to exit the stadium.
// 
//Its the classic Floyd’s Cycle Detection + Loop Removal method. Two phases.

//Phase 1 — Detect the Loop: move like middle element

    // Slow pointer moves 1 step.
    // Fast pointer moves 2 steps.

        // If they ever meet, the list contains a loop.
        // If fast reaches NULL → no loop.

//Phase 2 — Find the Start of the Loop: 1 step at a time

        //Once slow and fast meet, keep slow where it is, but reset fast to head.      // in this we are moving fast pointer remember

        //Now move both one step at a time.         // in this note: we have to move 1 step at a time
        //Where they meet again is the loop starting node.

        //This is one of those delightful mathematical quirks of cycle detection.

//Phase 3: Removal of the Loop:
    //Now you know the loop’s starting node.
        // Call it loop_start.
// 3 → 4 → 5 → 6
 //        ↑    ↓
 //        9 ←  8

//     If 5 is loop_start, walk 5→6→8→9 until next points back to 5. That last node (9 here) is your loop-end node.
// Set its next = NULL.
// Boom. Loop gone.

        // To actually remove the loop, walk from loop_start until you reach the node whose next is again loop_start.

// Loop Removal : Create List-> add loop->Detect Cycle: if slow==head, break-> To Remove Loop(start slow=head, till u meet fast i.e. slow==fast again)
//  Inserting node at end first
// than finding loop and removing it

  // &head is of type: struct  node** ;
   //head is of type: struct node*;
    //*head is of type: struct node*
   
#include <stdio.h>
#include <stdlib.h>

struct node
{   int data;
    struct node *next;
};

void remove_loop(struct node* head)
{ // via slow, fast pointer approach;
    // First find meeting point, node where loop is their(made) while llop  for slow, fast till slow==fast
 // After 1st meetup:  ******* Put slow=head. and start the loop again. Now, they will meet at start of the loop
}
void insert_loop(struct node* head,struct node* tail, int pos)
{     // &head is of type: struct  node** ;
   //head is of type: struct node*; stores address of new_node
    //*head is of type: struct node*
   
    struct node* temp = head;
    for(int i=0;i<pos;i++)
      temp=temp->next;

      tail->next= temp;


}

//---Basic Function for Linked List:  Insert at End, Print List
void push_back(struct node** head, struct node** tail, int data)  // issue with single pointer, use double pointer
{  struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data= data;
    new_node->next = NULL;
// Insertion at end
    if(*head==NULL)
    *head=*tail=new_node;
    else
    {  
      //  t   t   t
        //1-->2-->3-->4   5
      //  h
     
      (*tail)->next= new_node; // connect tail next to new_node
      // since double pointer
        *tail =  new_node ;
// (*tail)->next = new_node;   // link
//         *tail = new_node;           // update tail
    }

}

void print_list(struct node* head)
{
 struct node* temp=head;
 printf("\n Linked List is: ");
  
   while(temp!=NULL)
    {
        printf("%d -->", temp->data);
        temp=temp->next;
    }
}


int main()
{ struct node* head =NULL,*tail=NULL;  
    // &head is of type: struct  node** ;
   //head is of type: struct node*;
    //*head is of type: struct node*
   
  int pos=0;

    push_back(&head,&tail,1);
    push_back(&head,&tail,2);
    push_back(&head,&tail,3);
    push_back(&head,&tail,4);
 print_list(head);
    printf(" Enter the node position where u want to insert the loop");
    scanf("%d",&pos);
    insert_loop(head,tail,pos);
    // before Printing we have to remove the loop as it will be stuck bcz while traversing , we are doing it with condition such that its not equal to NULL;

    // print_list(head);


    return 0;
}