#include<stdio.h>
int Factorial(int n){
    if(n<2)
        return 1;
    else
        return n*Factorial(n-1);
}
int main(){
    printf("%d",Factorial(3));
}