#include<stdio.h>
#include<stdlib.h>

int main(){
    // cach 1
    int A[3][4] = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};
    // cach 2
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    // cach 3
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            C[i][j] = i;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("C[%d][%d] %d: ",i,j,C[i][j]);
        }
    }
}