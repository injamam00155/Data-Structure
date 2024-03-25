#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool hasMirrorTwice(int a1[], int x, int a2[], int y)
{
    int b=0;
    if (y>x){return false;}
    else
    {
        for(int i=0;i<x;i++)
        {
            
            if (a1[i]==a2[y-1])
            {
                int c=1;
                b++;
                for(int j=2;j<=y;j++)
                {
                    if(a1[i+j-1]==a2[y-j]){++c;}
                    if(j==y&&c!=y){b--;}
                }
                if(b==2){return true;}
            }
        }
        return false;
    }
}
int main() 
{   
int a1[] = {6, 1, 2, 1, 3, 1, 3, 2, 1, 5};
int a2[] = {1, 2};	
cout<<hasMirrorTwice(a1, 10, a2, 2);
int a3[] = {5, 8, 4, 18, 5, 42, 4, 8, 5, 5};
int a4[] = {4, 8, 5};	
cout<<hasMirrorTwice(a3, 10, a4, 3);
int a5[] = {6, 3, 42, 18, 12, 5, 3, 42, 3, 42};
int a6[] = {42, 3};	
cout<<hasMirrorTwice(a5, 10, a6, 2);
int a7[] = {6, 1, 2, 4, 2, 1, 2, 4, 2, 1, 5};
int a8[] = {1, 2, 4, 2, 1};	
cout<<hasMirrorTwice(a7, 11, a8, 5);
int a9[] = {0, 0};
int aa[] = {0};	
cout<<hasMirrorTwice(a9, 2, aa, 1);
int ab[] = {8, 9, 2, 1};
int ac[] = {5, 7, 1, 2, 9, 8};
cout<<	hasMirrorTwice(ab, 4, ac, 6);
return 0;
}

