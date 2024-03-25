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


void deleteNode(ListNode* &h, int x)
{
    ListNode* temp1 = h;
    ListNode* prev = h;
    if(h->data == x){h = h->next;return;}
    while (temp1->data != x){prev = temp1;temp1 = temp1->next;}
    if (temp1->next == nullptr){prev->next = nullptr;}
    else{prev->next = temp1->next;}
}

void combineDuplicates(ListNode* &h)
{
    ListNode* current = h;
    ListNode* current2 = current;
    ListNode* temp = h;

    if (h == nullptr){return;}
    while (current != nullptr)
    {
        current2 = current;
        temp = current->next;
        int c = current2->data;
        while (temp != nullptr)
        {
            if (temp->data == c)
            {
                current2->data += temp->data;
                    ListNode* temp1 = current2;
                    ListNode* prev = current2;
                    if(current2->data == c){current2 = current2->next;return;}
                    while (temp1->data != c){prev = temp1;temp1 = temp1->next;}
                    if (temp1->next == nullptr){prev->next = nullptr;}
                    else{prev->next = temp1->next;}
            }
            else{break;}
            temp = temp->next;  
        }
        current = current->next;
    }
}

int main()
{
    ListNode* h=nullptr;
    ListNode* i=nullptr;

    addValue(h,1);
    addValue(h,1);
    addValue(h,2);
    addValue(h,2);
    addValue(h,2);
    addValue(h,2);
    addValue(h,3);
    addValue(h,3);
    addValue(h,3);
    addValue(h,4);

    combineDuplicates(h);
    // removeAllThreshold(h,18,5);
    
    printList(h);
    return 0;
}
