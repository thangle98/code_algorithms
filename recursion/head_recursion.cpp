#include<iostream>
using namespace std;

void func(int n){
    if(n>0){
        func(n-1);
        printf("%d", n);
    }
}
int main(){
    func(3);
    printf("\n");
    int i = 1;
    while(i <= 3){
        printf("%d", i);
        i++;
    }
}