#include<iostream>
#include<iomanip>
using namespace std;

bool contains(int a1[], int x, int a2[], int y)
{
    for(int i=0;i<x;++i)
    {
        if (a2[0]==a1[i])
        {   int c=1;
            int j=1;
            while(j<y)
            {
                if(a2[j]==a1[i+j]){++c;}
                else{c=0;break;}
                j++;
                if (c==y){return true;}
            }
        }
    }
    return false;
}
int main() 
{   
int a1[] = {1, 6, 2, 1, 4, 1, 2, 1, 8};
int a2[] = {4,1,0};
bool x=contains(a1,9,a1, 9);
cout<<x;
    return 0;
}