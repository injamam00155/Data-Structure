int numUnique(int a1[], int x)
{
    int c=x;
    for(int i=0;i<x-1;++i)
    {   
        for(int j=i+1;j<x;++j)
        {   
            if(a1[i]==a1[j]){--c;break;}
        }
    
    }   
    return c;
} 