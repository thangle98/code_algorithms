#include<iostream>
using namespace std;
void funcB(int n);

void funcA(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        funcB(n-1);
    }
}

void funcB(int n)
{
    if(n>1)
    {
        funcA(n/2);
    }
}

int main()
{
    funcA(3);
    return 0;
}