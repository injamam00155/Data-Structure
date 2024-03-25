void banish(int a1[],int x,int a2[],int y)
{   
    for (int i=0;i<y;++i)
    {   
        for(int j=0;j<x;++j)
        {
            if(a1[j]==a2[i])
            {   
                for(int k=j;k<x-1;++k)
                {
                    a1[k]=a1[k+1];
                }
                a1[x-1]=0;
                j--;
            }
        }
    }
}