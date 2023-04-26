#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    float length;
    float width;
};

int main()
{
    rectangle *r1;
    r1 = (rectangle*)malloc(sizeof(rectangle));
    r1->length = 10;
    r1->width = 5;
    cout<<sizeof(*r1)<<endl;
    cout<<sizeof(r1)<<endl;
    cout<<r1->length<<endl<<r1->width;

    return 0;
}
