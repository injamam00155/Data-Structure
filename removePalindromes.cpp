#include<iostream>
#include<iomanip>
using namespace std;

void switchPairs(string a1[],int x)
{   
    for (int i=0;i<x-1;i=i+2)
    {   
            string temp=a1[i];
            a1[i]=a1[i+1];
            a1[i+1]=temp;
    }
}
int main() 
{   
string a1[] ={"aa","bb","cc","dd","ee"}  ;
switchPairs(a1,5);
return 0;
}