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




ListNode* intersection(ListNode* h, ListNode* i)
{
    if(h==nullptr||i==nullptr){return nullptr;}
    ListNode* currenth=h;
    ListNode* currenti=i;
    while(currenth!=nullptr)
    {
        while(currenti!=nullptr)
        {
            if(currenth->data==currenti->data){return currenth;}
            currenti=currenti->next;
        }
        currenti=i;
        currenth=currenth->next;
    }
    return nullptr;
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

    printList(intersection(h,i));
    return 0;
}
