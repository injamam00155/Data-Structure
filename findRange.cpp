#include<iostream>
#include<iomanip>
using namespace std;

int findRange(int a1[],int x)
{
    int big=a1[0],small=a1[0];
    for(int i=1;i<x;++i)
    { 
        {
            if (a1[i]>big){big=a1[i];}
            else if(a1[i]<small){small=a1[i];}
        }
    }
    return (big-small)+1;
}
int main() 
{   
int a1[] = {42, 37, 1, 97, 1, 2, 7, 42, 3, 25, 89, 15, 10, 29, 27};
int x=findRange(a1,15);
cout<<x;
    return 0;
}