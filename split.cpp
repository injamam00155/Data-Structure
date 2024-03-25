#include <iostream>
#include <sstream>

using namespace std;

struct ListNode
{
    int data;
    ListNode* next=nullptr;
};

void split(ListNode* &h)
{
    if(h==nullptr){return;}
    ListNode *current = h;
    while (current->next != nullptr)
    {
        if(current->next->data < 0)
        {
            ListNode* nextptr = current->next;
            current->next=current->next->next;  
            nextptr->next = h;
            h=nextptr;
        }
        else{current=current->next;}
    }
}

int main()
{
    ListNode* h=nullptr;

    addValue(h,8);
    addValue(h,7);
    addValue(h,-4);
    addValue(h,19);
    addValue(h,0);
    addValue(h,43);
    addValue(h,-8);
    addValue(h,-7);
    addValue(h,2);
    
    split(h);
    
    printList(h);
    return 0;
}
