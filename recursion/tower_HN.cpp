#include<stdio.h>

void Tower_HN(int n, int A, int B, int C){
    if(n>0){
        Tower_HN(n-1, A, C, B);
        printf("%d to %d\n", A, C);
        Tower_HN(n-1, B, A, C);
    }
}
int main() {
    Tower_HN(3,1,2,3);
}