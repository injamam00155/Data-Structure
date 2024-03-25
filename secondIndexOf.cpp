int secondIndexOf(int a1[],int x, int f)
{
    for (int i=0;i<x;++i)
    {   
        if(a1[i]==f)
        {   
            for(int j=i+1;j<x;++j)
            {
                if(a1[j]==f){return j;}
            }
            return -1;
        }
    
    }
    return -1;
}