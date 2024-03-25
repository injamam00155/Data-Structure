#include <iostream>
#include <sstream>

using namespace std;

struct ListNode
{
    int data;
    ListNode* next=nullptr;
};

void addValue(ListNode *&n, int data)
{
    if (n == nullptr)
    {
        n = new ListNode;
        n->data = data;
    }
    else
    {
        ListNode *current = n;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        ListNode *p = new ListNode;
        p->data = data;
        current->next = p;
    }
}

void printList(ListNode *n)
{
    while (n != nullptr)
    {
        cout << n->data << endl;
        n = n->next;
    }
    cout << endl;
}

void reverse(ListNode* &h)
{
    if(h==nullptr){return;}
    int count=0;
    ListNode* current = h;
    while (current->next != nullptr){current = current->next;count++;}
    ListNode* finalheadptr=current;
    current=h;
    while(count--)
    {
        while(current->next->next!=nullptr){current=current->next;}
        current->next->next=current;
        current->next=nullptr;
        if(count==0){h=finalheadptr;return;}
        current=h;
    }
}

int main()
{
    ListNode* h=nullptr;

    addValue(h,1);
    addValue(h,8);
    addValue(h,19);
    addValue(h,4);
    addValue(h,17);

    reverse(h);
    
    printList(h);
    return 0;
}
