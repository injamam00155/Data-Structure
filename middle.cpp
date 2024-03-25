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


int middle(ListNode* h)
{
    if(h==nullptr){throw "kichu nai";}
    if(h->next==nullptr){return h->data;}
    int count=1;
    ListNode* current=h;
    while(current->next!=nullptr)
    {
        current=current->next;
        count++;
    }
    current=h;
    count=count/2;
    while(count--){current=current->next;}
    return current->data;
}

int main()
{
    ListNode* h=nullptr;
    ListNode* i=nullptr;

    addValue(h,1);
    addValue(h,2);
    addValue(h,3);
    addValue(h,4);
    addValue(h,5);

    addValue(i,2);
    addValue(i,4);
    addValue(i,6);
    addValue(i,7);
    addValue(i,8);

    cout<<middle(h);

    return 0;
}
