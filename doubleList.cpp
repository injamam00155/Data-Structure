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

void stutter(ListNode* h)
{
    while(h!=nullptr)
    {
    ListNode* n = new ListNode;
    n->data = h->data;
    n->next = h->next;
    h->next = n;
    h=h->next->next;
    }
}

void doubleList(ListNode* h)
{
    if(h==nullptr){return;}
    int count=0;
    ListNode *current = h;
    while (current->next != nullptr)
    {current = current->next;count++;}
    for(int i =0;i<=count;i++)
    {
    ListNode *n = new ListNode;
    n->data = h->data;
    current->next = n;
    n->next=nullptr;
    h=h->next;
    current=current->next;
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
    
    

    doubleList(h);

    printList(h);
    return 0;
}
