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

int main()
{
    ListNode* h=nullptr;

    addValue(h,1);
    addValue(h,8);
    addValue(h,19);
    addValue(h,4);
    addValue(h,17);

    // stutter(h);

    printList(h);
    return 0;
}