#include<iostream>
using namespace std;

void triangle(int x)
{
    for (int i = 1; i <= x; ++i) 
    { 
        for (int j = 1; j <= x-i; ++j) 
        {
            cout<<" ";
        }
        
        for (int j = x-i; j < x; ++j)
        {
            cout<<"*";
        }
    cout<<endl;
    }
} 
int main()
{   
    triangle(5);
    return 0;
}
