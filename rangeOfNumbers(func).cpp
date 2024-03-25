void rangeOfNumbers(int a, int b) 
{   
    if(a<=b)
    {
    for(int i=a;i<=b;++i)
        {
            cout<<i;
            while(i!=b){cout<<", ";break;}
        }
    }
    else
        for(int i=a;i>=b;--i)
        {
            cout<<i;
            while(i!=b){cout<<", ";break;}
        }
}