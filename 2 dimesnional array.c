// project 2 dimensional array 
/*the code creator is Alex Mwangi
registratiOn number :CT101/G/23713/24
Date 15th october 2024
*/
#include <stdio.h>
int main(){
    int i,j;
    int matrix [2][3]={{1,2,3},{4,5,6}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){    
printf("the matrix is [%d][%d]=%d\n",i,j,matrix[i][j]);
}
}
    return 0;
}