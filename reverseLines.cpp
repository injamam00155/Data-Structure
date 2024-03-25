#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>

using namespace std;


void reverseLines(ifstream& input)
{
    if (input.fail()){return;}
    string Line = "";
    getline (input, Line);
    reverseLines(input);
    cout << Line << endl;
    input.close();
}

int main()
{
    ifstream input;
    input.open("poem.txt");
    reverseLines(input);
    return 0;
}