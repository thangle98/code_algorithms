#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

// int *fun(int size)
// {
//     int *p;
//     p = (int*)malloc(sizeof(int)*size);
//     return p;
// }

// int main()
// {
//     int *ptr, sz=5;
//     ptr = fun(sz);
//     for(int i=0; i<sz; i++)
//         cout<<ptr[i]<<endl;
//     return 0;
// }
// void fun(int A[])
// {
//     cout<<A<<endl;
//     cout<<sizeof(A)<<endl;
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(A)/sizeof(int)<<endl;
//     A[0] = 1;
// }

// int main()
// {
//     int A[] = {2,4,6,8,10};
//     int n=5;
//     fun(A);
//     cout<<sizeof(A)/sizeof(int)<<endl;
//     for(int x:A)
//     cout<<x<<" ";
//     return 0;
// }

// int *func(int size)
// {
//     int *p;
//     p = new int[size];
//     for(int i=0; i<n; i++)
//     p[i] = i+1;
//     return p
// }

// int main()
// {
//     int *ptr, sz = 5;
//     ptr = func(sz);
//     for(int i=0; i<sz, i++)
//     cout<<ptr[i]<<endl;
// }
// struct student{
//     char name;
//     int age;
// };

// student *get_students(int sz)
// {
//     student *list_student;
//     list_student = new student[sz];
//     for(int i=0; i<sz; i++){
//         list_student[i].name = 'T';
//         list_student[i].age = i + 20; 
//     }
//     return list_student;
// }

// int main()
// {
//     student *ptr;
//     int sz = 5;
//     ptr = get_students(sz);
//     for(int i=0; i<sz; i++){
//         cout<<ptr[i].name<<endl;
//         cout<<ptr[i].age<<endl;
//     }
// }
struct Rectangle
{
    int length;
    int breadth;
};

void changeLength(Rectangle *p, int l)
{
    p->length = l;
}

int main()
{
    Rectangle p = {10, 5};
    changeLength(&p, 20);   
}

