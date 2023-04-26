#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};

void initialize(Rectangle *p, int l, int w)
{
    p->length = l;
    p->width = w;
}

int area(Rectangle r)
{
    return r.length*r.width;
}

void changeLength(Rectangle *p, int l)
{
    p->length = l;
}

int main()
{
    struct Rectangle r;
    initialize(&r, 20, 15);
    cout<<r.length<<endl;
    cout<<r.width<<endl;
    cout<<area(r)<<endl;
    changeLength(&r, 17);
    cout<<r.length<<endl;
    cout<<r.width<<endl;
    cout<<area(r)<<endl;
}