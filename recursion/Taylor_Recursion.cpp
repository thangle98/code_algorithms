#include<stdio.h>
// 1 + x/1 + x^2/2! + x^3/3! + x^4/4!....
double e(int x, int n){
    static double f = 1, p = 1, r=0;
    if(n==0){
        return 1;
    }
    else{
        r = e(x, n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

double e_recu2(int x, int n){
    static double s=0;
    if(n == 0)
        return s;
    s = 1 + x*s/n;
    return e_recu2(x, n-1);
}

double e_iter(int x, int n){
    static double k = 1;
    static double num = 1;
    static double den = 1;
    for(int i=1; i<=n; i++){
        den *= x;
        num *= i;
        k += den/num;
    }
    return k;
}

int main(){
    printf("%lf \n",e(1, 10));
    printf("%lf \n",e_recu2(1, 10));
    printf("%lf \n",e_iter(1,10));
    return 0;
}