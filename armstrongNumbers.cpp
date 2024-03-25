void armstrongNumbers(int n){
    if(n==0){return;}
    int min=pow(10,n-1);
    if(n==1)
    {
        min=0;
    }
    int max=pow(10,n);
    for(int i=min;i<max;++i)
    {
		int sum=0;
		int arm=0;
        int x=i;
        while(x!=0)
        {
            arm=x%10;
            sum+=pow(arm, n);
            x=x/10;
			
        }
        if(sum==i)cout<<i<<" ";
    }
}