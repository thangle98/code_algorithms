#include<iostream>
using namespace std;

struct rectangle
{
    int depth; 
    int length;
    
};

int main()
{
    rectangle r = {25, 40};
    cout<<"depth: "<<r.depth<<endl<<"length: "<<r.length;
}
