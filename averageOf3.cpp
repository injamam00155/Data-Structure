#include<iostream>
using namespace std;

double averageOf3(int a,int b,int c)
{
    return (a+b+c)/3.0;
}
int main() 
{   
    int x=averageOf3(4,7,13);
    cout<<x;
}