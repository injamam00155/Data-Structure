#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int printMostCommonName(string names)
{
    
    int N=0,i=0,max=0,cc=0;
    string maxName;
    string name;
    ifstream filename(names);
    /*
    while(!filename.eof())
    {filename>>name;N++;}
    filename.seekg(0,ios_base::beg);
    string* arr=new string[N];
    */
    string arr[999];
    if(filename.fail()){return 0;}
    while(!filename.eof())
    {
        filename>>arr[i];
        ++i;
    }
    int count = sizeof(arr)/sizeof(*arr);
    for (int i = 0; i < count; ++i)
    {
        if (arr[i] != "")
        {
            ++cc;
        }
    }

    for (int i = 0; i < cc ; i++) 
    {
        int count = 1;
        for (int j = i+1; j < cc ; j++) 
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            maxName = arr[i];
        }
    }
    int c=count-1;
    for(int i=0;i<count-1;++i)
    {   
        for(int j=i+1;j<count;++j)
        {   
            if(arr[i]==arr[j]){--c;break;}
        }        
    }   
    cout << "Most common name: " << maxName << ", " << max<<endl;
    
    return c;
}

int main()
{
    cout<<printMostCommonName("names1.txt");
    return 0;
}