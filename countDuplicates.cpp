#include<iostream>
#include<iomanip>
using namespace std;

int countDuplicates(int a1[], int x)
{
    int c=0;
    for(int i=0;i<x-1;++i)
    {   
        for(int j=i+1;j<x;++j)
        {   
            if(a1[i]==a1[j]){++c;break;}
        }
    
    }   
    return c;
} 
int main() 
{   
int a1[] = {7, 7, 2, 2, 1, 2, 2, 7};
int x=countUnique(a1,8);
cout<<x;
    return 0;
}