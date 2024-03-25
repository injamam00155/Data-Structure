void numberSquare(int min, int max)
{
    for (int i = min; i <= max; i++) 
    { 
        for (int j = i; j <= max; j++) 
        {
            cout<<j;
        }
        
        for (int j = min; j < i; j++)
        {
            cout<<j;
        }
    cout<<endl;
    }
}