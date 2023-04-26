#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //int A[n] = {2,4,6}; khoi tao nhu nay cac phan tu con lai = 0
    int A[n]; // khoi tao nhu nay cac phan tu con lai la random value
    A[0] = 2;
    A[1] = 4;
    A[2] = 6;
    // for (int i=0; i<10; i++)
    // {
    //     cout<<A[i]<<endl;
    // }
    for(int x:A)
    {
        cout<<x<<endl;
    }
    return 0;
}