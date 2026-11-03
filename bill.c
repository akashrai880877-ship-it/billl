#include<stdio.h>
int bill(int rate)
{
    if(rate==0 || rate==1)
    {
        return 1;
    }
    else
    {
        return rate*bill(rate-1);
    }
}
int main()
{
    int b;
    b=bill(1);
    printf("bill of 1 is%d",b);
    return 0;
}