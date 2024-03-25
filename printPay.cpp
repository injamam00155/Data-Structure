#include<iostream>
#include<iomanip>
using namespace std;

void printPay(double r,int t)
{   
    cout<<"Hours worked: "<<t<<endl;
    cout<<"Pay earned: $";
    if (t>8){cout<<fixed<<setprecision(2) <<r*8+(t-8)*1.5*r;}
    else{cout<< fixed<<setprecision(2)<<t*r;}
}
int main() 
{   
    printPay(10,11);
    return 0;
}