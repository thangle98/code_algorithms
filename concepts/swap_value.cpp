#include<iostream>
using namespace std;

// swap value
// void swap(int x, int y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap(a,b);
//     cout<<"a: "<<a<<endl<<"b: "<<b;
// }

// swap adresss
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     cout<<"temp "<<temp;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap(&a, &b);
//     cout<<"a: "<<a<<endl<<"b: "<<b;
// }
// swap reference
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    cout<<"temp "<<temp;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout<<"a: "<<a<<endl<<"b: "<<b;
}