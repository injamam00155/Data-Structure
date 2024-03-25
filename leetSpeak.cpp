#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n, k,x;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        x = n - (k - 1);
        if (x>0&&x%2!=0)
        {
            cout<<("YES\n");
            for (int j = 0; j < k-1; j++)
            {
                cout<<"1 ";
            }
            cout<<x<<"\n";
            continue;
        }
        x = n - 2 * (k - 1);
        if (x>0&&x%2==0)
        {
            cout<<"YES\n";
            for (int j = 0; j < k-1; j++)
            {
                cout<<"2 ";
            }
            cout<<x<<"\n";
            continue;
        }
        cout<<"NO\n";
    }

    return 0;
}