#include<iostream>

using namespace std;

//Structure of a singly nexted list

struct node 
{
    int data = 0;
    node* next = nullptr;
};

//Finding size of a nexted list

int nodeSize(node *n)
{
    int count = 0;
    while(n!=nullptr){count++;n=n->next;}
    return count;
}
//adding node to a single next list

void addValue(node *&n, int data)
{
    if (n == nullptr)
    {
        n = new node;
        n->data = data;
    }
    else
    {
        node *current = n;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        node *p = new node;
        p->data = data;
        current->next = p;
    }
}

//adding a node in a preferred position [P.S. positioning starts with 1]

void addValueByInd(node*& h, int data, int index)
{
    if(nodeSize(h)<index||index<1){cout<<"Cannot add value: position number greater than size of list"<<endl;}
    else if (index == 1)
    {
        node* n = new node;
        n -> data = data;
        n -> next = h;
        h = n;
    }
    else
    {   
        node* current = h;
        for (int i = 1; i < index ; ++i){current = current->next;}
        node* n = new node;
        n -> data = data;
        n -> next = current -> next;
        current -> next = n;
    }
}
//Deleting all nodes that has this value

void deletenodesWithValue(node*& front, int a) 
{
    if(front==nullptr){return;}
    while(front->data==a)
    {
        node* junk = front; 
        front=front->next;
        delete junk;
    }
    node* current = front;
    node* prev;
    while(current->next!=nullptr)
    {
        if (current->next->data == a) 
        {
            node* junk = current->next;
            current->next = current->next->next;
            delete junk;
        }
        else{prev=current;current=current->next;}
    }
    if(current->data==a)
    {
        node* junk = current;
        delete junk;
        prev->next=nullptr;
    }
}

//printing a whole nexted list from head to tail

void printList(node* n)
{
    cout<< "HEAD  {";
    while (n != nullptr)
    {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout <<" nullptr }   TAIL" <<endl;
}

//printing a whole nexted list from tail to head

void printListReverse(node* h)
{
    cout<< "TAIL  { nullptr <- ";
    int count = 0;
    node* n = h;
    while (n != nullptr)
    {
        count++;
        n = n->next;
    }
    while(count--)
    {
        n=h;
        for(int i=0;i<count;i++){n=n->next;}
        cout<<n->data;
        if(count!=0){cout<<" <- ";}
    }
    cout <<" }   HEAD" <<endl;
}

//adding each element twice

void stutter(node* h)
{
    while(h!=nullptr)
    {
    node* n = new node;
    n->data = h->data;
    n->next = h->next;
    h->next = n;
    h=h->next->next;
    }
}

//merging 2 sorted nodes in a sorted way

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
    node* h=nullptr;
    node* i=nullptr;
    addValue(h,1);
    addValue(h,1);
    addValue(i,9);
    addValue(i,2);
    addValue(h,2);
    addValue(i,15);
    addValue(h,4);
    addValue(h,6);
    // addValueByInd(h,999,0);
    // printListReverse(h);
    // stutter(h);
    printList(h);
    printList(i);
    h=merge(h,i);
    // cout<<nodeSize(h)<<endl;
    // deletenodesWithValue(h,4);
    printList(h);
    return 0;
}
