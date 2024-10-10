//for loop -output numbers 1-30
/*the code creator is Alex Mwangi
registration number CT101/G/23713/24
DATE: 04 October 2024
*/
//preprocessor directives printf(), scanf() 
#include<stdio.h>
int main () {
int start, stop, sum=0;
printf("enter the value to start");
scanf("%d",&start);
printf("enter the value to stop");
scanf("%d",&stop);
do{  printf("%d\n",start);
start++;
sum +=start;
} while (start<stop) ;
printf("the sum is %d",sum);
return 0;
}