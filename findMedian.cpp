int findMedian(int a1[],int x)
{
    for (int i = 0; i < x-1; i++)
    {
        for (int j = i+1; j < x; j++)
        {
            if (a1[i]>a1[j])
            {
                int temp=a1[i];
                a1[i]=a1[j];
                a1[j]=temp;
            }
        }
    }
    return a1[x/2];
}