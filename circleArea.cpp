#include<iostream>
using namespace std;

double circleArea(double r)
{
    return 3.14159265359*r*r;
}
int main() 
{   
    double x=circleArea(2);
    cout<<x;
    return 0;
}