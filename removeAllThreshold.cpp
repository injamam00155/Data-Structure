#include <iostream>
#include <sstream>

using namespace std;

struct ListNodeDouble
{
    double data;
    ListNodeDouble *next = nullptr;
};

void addValue(ListNodeDouble *&n, double data)
{
    if (n == nullptr)
    {
        n = new ListNodeDouble;
        n->data = data;
    }
    else
    {

        ListNodeDouble *current = n;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        ListNodeDouble *p = new ListNodeDouble;
        p->data = data;
        current->next = p;
    }
}

void printList(ListNodeDouble *n)
{
    while (n != nullptr)
    {
        cout << n->data << endl;
        n = n->next;
    }
    cout << endl;
}

void removeAllThreshold(ListNodeDouble*& h, double val, double range){
  if(h==nullptr)return;
  ListNodeDouble* current=h;
  ListNodeDouble* prev=h;
  while(current!=nullptr)
  {
    if(h->data>=(val-range) && h->data<=(val+range)){h=h->next;}
    if(current->data>=(val-range) && current->data<=(val+range))
    {
      prev->next=current->next;
      current=prev;
    }
    prev=current;
    current=current->next;
  }
}

int main()
{
    ListNodeDouble *h = nullptr;

    addValue(h, 1);
    addValue(h, 2);
    addValue(h, 3);
    addValue(h, 4);
    addValue(h, 5);
    addValue(h, 18);
    addValue(h, 16);
    addValue(h, 3);
    addValue(h, 4);
    addValue(h, 19);
    addValue(h, 21);
    addValue(h, 22);

    removeAllThreshold(h, 3, 2);

    printList(h);
    return 0;
}
