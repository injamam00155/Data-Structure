#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

    int evenDigits(int x) 
    {   
        if(x!=0)
        {
            if(x%2==0){return x%10 + 10*evenDigits(x/10);}
            return evenDigits(x/10);
        }
        return 0;
    }
int main() {
    cout<<evenDigits(2020);
return 0;
}
