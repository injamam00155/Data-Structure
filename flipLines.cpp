#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

void flipLines(string myfile){
    ifstream input_file(myfile);
    if(input_file.fail()){
        cout<<"Unable to open input file \""<<myfile<<"\"!";
        return;
    }
    string line1="";
    string line2="";
    while(getline(input_file,line1))
    {
        if(getline(input_file,line2))
        {
            transform(line2.begin(),line2.end(),line2.begin(),::toupper);
            cout<<line2<<endl;
            transform(line1.begin(),line1.end(),line1.begin(),::tolower);
        }
        else{transform(line1.begin(),line1.end(),line1.begin(),::toupper);}
        
        cout<<line1<<endl;
    }
    input_file.close();
}
int main()
{
    flipLines("carrol.txt");
    return 0;
}