void evenSum()
{   
    int count = 1, x, y, max=0, sum=0;
    cout<<"how many integers? ";
    cin>>x;
    do
    {
        cout<<"next integer? ";
        cin>>y;
        if(y%2==0)
        {   
            sum=sum+y;
            if(max<y)
            {
                max=y;
            }
        }
        count=count+1;        
    }
    while(count<=x);
    cout<<"even sum = "<<sum<< endl<<"even max = "<<max<<endl;
    }