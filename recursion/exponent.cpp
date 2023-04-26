#include<stdio.h>

int exponent(int m, int n){
    if(n==1)
        return m;
    else
        return m*exponent(m, n-1);
}

int main(){
    printf("%d ", exponent(2, 5));
}