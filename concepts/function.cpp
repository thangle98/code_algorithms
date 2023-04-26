#include<iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a+ b;
    return c;
}

int main()
{
    int a = 5; 
    int b = 10;
    int c = add(a, b);
    printf("add: %d", c);
}