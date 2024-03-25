void fibonacci(int n)
{
    cout<<"Fibonacci sequence up to "<<n<<":"<<endl;
    int fib=0, t1 = 0, t2 = 1;
    while (t1<n)
    {
        cout << t1 << endl;
        fib = t1 + t2;
        t1 = t2;
        t2 = fib;
    }
}