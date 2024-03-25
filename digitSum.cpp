#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

    int digitSum(int x) 
    {   
        if(x==0){return x;}

        return x%10 + digitSum(x/10);
    }
int main() {
    cout<<digitSum(-123);
return 0;
}
