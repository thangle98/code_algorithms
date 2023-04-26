#include<stdio.h>

int main()
{
    int A[] = {2,3,4,5,6};
    printf("%d \n", A[2]);
    printf("%d \n", 2[A]);
    printf("%d \n", *(A + 2));
    printf("%d \n", A);
    printf("%d \n", A+1);// + pointer + 4byte(int)
}