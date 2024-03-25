double computeTax(double x)
{   
    if(x>=0&&x<=7150)
    {
        return 0.1*x;
    }
    else if(x<=29050)
    {
        return 715+0.15*(x-7150);
    }
    else if(x<=70350)
    {
        return 4000+0.25*(x-29050);
    }
    else
    {
        return 14325 + 0.28*(x-70350);
    }
} 
