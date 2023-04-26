#include<stdio.h>
int fibonacci(int n){
    if(n <= 1)
        return n;
    else
        return fibonacci(n-2) + fibonacci(n-1);
}

int F[10];
int mfibo(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2] = mfibo(n-2);
        if(F[n-1]==-1)
            F[n-1] = mfibo(n-1);
        return F[n-2] + F[n-1]; 
    }
}
int main(){
    printf("fibo: %d", fibonacci(5));
    for(int i=0; i<10; i++){
        F[i] = -1;
    }
    printf("\nmfibo: %d", mfibo(5));
}