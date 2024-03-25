#include <iostream>
#include <sstream>

using namespace std;

struct ListNode
{
    int data;
    ListNode *next = nullptr;
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


void chopBothSides(ListNode* &h, int k)
{
    if (k<=0){return;}
    int count=1;
    ListNode* current =h;
    ListNode* prevh = h;
    while (current->next!=nullptr){current=current->next;count++;}
    current=h;
    if (count==2*k){delete h->next;h=nullptr;return;}
    if (count<2*k){throw 1;}
    for (int i = 1;i<count-k;i++){current=current->next;}
    delete current->next;
    current->next=nullptr;
    for (int i = 1;i<=k;i++){current=h;h=h->next;}
    current->next = nullptr;
    delete prevh;
}

int main()
{
    ListNode *h = nullptr;
    ListNode *i = nullptr;

    addValue(h, 3);
    addValue(h, 1);
    addValue(h, 4);
    addValue(h, 15);
    addValue(h, 9);
    addValue(h, 2);
    addValue(h, 6);
    addValue(h, 5);
    addValue(h, 35);
    addValue(h, 89);

    chopBothSides(h,3);
    // printList(transferEvens(h));
    printList(h);

    return 0;
}
