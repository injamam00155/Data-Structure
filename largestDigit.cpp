#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int largestDigit(int x) 
{   int a,b;
    if(x==0){return 0;}
    if(x<0){x=x*-1;}
    a=x%10;
    b=largestDigit(x/10);
    if (b<a){return a;}
    return b;
}
int main() 
{
    cout<<largestDigit(-123);
    return 0;
}
