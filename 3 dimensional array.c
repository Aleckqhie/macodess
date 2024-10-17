#include <stdio.h>
int main(){
int i=0,j=0,k=0;
int matrix[2][2][3]={
    {{1,2,3},{4,5,6}},
{{7,8,9},{10,11,12}}
};
while(i<2){
    j=0;
    while (j<3){
        k=0;
        while (k<2){
            printf("the matrix is [%d][%d][%d]=%d\n",i,j,k,matrix[i][j][k]);
        
            k++;}
            j++;}
            i++;}
    return 0;
}