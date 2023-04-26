#include<iostream>
using namespace std;

class Rectangle
{
    private int length;
    private int width;

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    int area()
    {
        return length*width;
    }

    void changeLength(int l)
    {
        length = l;
    }
    void print()
    {
        cout<<"length: "<<length<<endl;
        cout<<"width: "<<width<<endl;
    }
}

int main()
{
    Rectangle r(20, 15);
    r.print();
    cout<<"area: "<<r.area()<<endl;
    r.changeLength(15);
    r.print();
}

