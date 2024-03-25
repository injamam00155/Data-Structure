bool sorted(double a1[],int x)
{
    for (int i=0;i<x-1;++i)
    {   
        if(a1[i]>a1[i+1]){return false;}    
    }
    return true;
}