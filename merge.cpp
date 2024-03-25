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
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

node* merge(node* h1, node* h2)
{
    if (h1 == nullptr) {return h2;}
    else if (h2 == nullptr) {return h1;}
    node* temp = nullptr;
    if (h1->data > h2->data){temp = h2;temp->next = merge(h2->next, h1);}
    else{temp = h1;temp->next = merge(h1->next,h2);}
    return temp;
}

int main()
{
    ListNode *h = nullptr;
    ListNode *i = nullptr;

    addValue(h, 4);
    addValue(h, 5);
    // addValue(h, 3);
    // addValue(h, 5);
    // addValue(h, 7);
    // addValue(h, 9);
    addValue(i, 1);
    // addValue(h, 5);
    addValue(i, 2);
    addValue(i, 3);
    // addValue(i, 6);
    // addValue(i, 9);
    // addValue(i, 10);
    // addValue(i, 9);
    // addValue(i, 30);
    // addValue(i, 6);
    // addValue(h, 6);

    h=merge(i,h);
    // braid(h);
    // printList(transferEvens(h));
    printList(h);
    // printList(i);

    return 0;
}
