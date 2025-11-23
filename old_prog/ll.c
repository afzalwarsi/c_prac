
#include <stdio.h>
struct node{
    int data;
    struct node* next;
};

struct node* middle(int struct node* head)
{   
    1st
        f
      s
    t
    1 2 3 4 5 -> NULL
    h
    
    2nd 
            f
        s
      t
    1 2 3 4 5 -> NULL
    h
    
    struct node* temp =head;
    struct node* slow= temp ;
    struct node* fast= temp;
      
    while(fast->next == NULL)
    {
        *slow = temp->next;
        *fast= temp-->next-->next;
        temp= temp->next;
    }
    return *slow;
    
}

int main()
{  
    struct node n;
    
    return 0;
}