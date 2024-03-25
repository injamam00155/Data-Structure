int sumOfDigits(int x)
{   
    int sum=0;
    if (x<0){x=-x;}
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    
    return sum;
}