#include<iostream>
#include<iomanip>
using namespace std;

int sumOfrange(int x,int y)
{   
    int sum=0;
    for(int i=x;i<=y;++i)
    {
        sum=sum+i;
    }
    return sum;
}
int main() 
{   
    cout<<sumOfrange(1,6);
    return 0;
}