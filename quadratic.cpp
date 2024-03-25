#include<iostream>
#include<cmath>
using namespace std;

void quadratic(int a, int b, int c, float& root1, float& root2) 
{
    root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
}

int main() 
{   
    float x,y;
    quadratic(1,-3,-4,x,y);
    cout<<x<<" "<<y;
    return 0;
}