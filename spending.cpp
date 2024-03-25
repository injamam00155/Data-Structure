void spending(string name)
{   
    double amount;
    cout << "How much will "<<name<<" be spending? ";
    cin>>amount;
    cout<<endl;
    int numBills = int(amount / 20.0);
    if (numBills * 20.0 < amount) {numBills++;}
    cout<<name<<" needs " << numBills << " bills" << endl;
}