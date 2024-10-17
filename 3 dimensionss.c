#include<stdio.h>
int main(){
    int i=0,j=0,k=0;
    int matrix [2][2][3]={
        {{34,56,45},{78,89,97}},
        {{12,23,31},{91,19,28}}
    };
    do{
        j=0;
        do{
            k=0;
            do{printf("the matrix is [%d][%d][%d]=%d\n",i,j,k,matrix[i][j][k]);
            k++;
            }
            while(k<2);

            j++;
        }while(j<3);
        i++;

    }while(i<2);
    return 0;
}