#include<iostream>
using namespace std;

int main()
{   
    int x,sum=0;
    cout<<"Type an integer: ";
    cin>>x;
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    cout<<"Digit sum is "<<sum;
    return 0;
}
