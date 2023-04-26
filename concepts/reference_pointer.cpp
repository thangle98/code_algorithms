#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    float length;
    float with;
};

int main()
{
    int a = 10;
    int &p = a;
    int *ptr = &a;
    cout<<"p: "<<p<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"ptr "<<*ptr<<endl;

    return 0;
}
