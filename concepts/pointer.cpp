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
    // int a=10;
    // int *p;
    // p = &a;
    // cout<<"pointer: "<<*p<<endl;
    // cout<<a;
    // int A[5] = {2,4,6,8,10};
    // int *p;
    // //p= (int *)malloc(5*sizeof(int));
    // p = new int[5];
    // p[0] = 10; p[1] = 20; p[2] = 14; p[3] = 21; p[4] = 31;
    // for(int i=0; i<5;i++)
    // cout<<p[i]<<endl;
    // int *p1;
    // double *p2;
    // char *p3;
    struct rectangle *p4;
    // cout<<sizeof(p1)<<endl;
    // cout<<sizeof(p2)<<endl;
    // cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    //delete [] p;
    return 0;
}
