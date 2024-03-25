#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

double averageValueInFile(string name)
{
    ifstream file;
    file.open(name);
    int c=0;
    double x=0,total=0.0;
    while(!file.eof())
    {
        ++c;
        file>>x;
        total=total+x;
    }
    file.close();
    if(total==0){return 0.0;}
    return total/c;
}

int main()
{
    cout<<averageValueInFile("input.txt");
    return 0;
}