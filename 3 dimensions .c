//3 dimensional array
/*
code craetor Alex Mwangi
registration number CT101/G/23713/24
Date 13th octber 2024
*/
#include <stdio.h>
int main (){
int i,j,k;
int matrix[2][3][2]={
    {{23,45},{34,67},{54,26}},
{{35,74},{24,89},{26,95}}
};
for (i=0;i<2;i++){
    for (j=0;j<3;j++){
    for (k=0;k<2;k++){
    printf("the matrix is [%d][%d][%d]=%d\n",i,j,k,matrix[i][j][k]);
}
    }
}
    return 0;
}