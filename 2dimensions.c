//2dimensions project
/*code creator is Alex Mwangi
registration number CT101/G/23713/24
date 13th octobrer 2024
*/
#include<stdio.h>
int main(){
int i,j;
int matrix[2][3]={{23,45,56},{78,89,01}};
for (i=0;i<2;i++){
    for(j=0;j<3;j++)
    printf("the matrix is [%d][%d]=%d\n",i,j,matrix[i][j]);
}
    return 0;
}