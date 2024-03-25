#include<iostream>
using namespace std;
int main() 
{   
    int x,sum=0;
    cout<<"Type a number: ";
    cin>>x;
    while(x!=-1)
    {   
        sum=sum+x;
        cout<<"Type a number: ";
        cin>>x;
        
    }
    cout<<"Sum is "<<sum;
    return 0;
}