#include<iostream>
#include<iomanip>
using namespace std;

void showTwos(int x)
{   cout<<x<<" = ";
    while(x%2==0)
    {
        cout<<"2 * ";
        x=x/2;
    }
    cout<<x;
}
int main() 
{   
    showTwos(12);
    return 0;
}