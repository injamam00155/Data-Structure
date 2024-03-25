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




void expand(ListNode* &h, int n)
{
    if(h==nullptr||n==1){return;}
    if(n==0){h=nullptr;return;}
    else if(n<0){throw 1;}
    ListNode* current=h;
    while(current!=nullptr)
    {
        current->data=(current->data)/n;
        for(int i=1; i<n;i++)
        {
            ListNode* newNode= new ListNode;
            newNode->data=current->data;
            newNode->next=current->next;
            current->next=newNode;
            current=current->next;
        }
        current=current->next;
    }
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

    expand(h,0);
    printList(h);

    return 0;
}
