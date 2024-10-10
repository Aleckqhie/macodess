//progeramme: for loop promoting user to enter value they want
/*code creator Alex Mwangi
registration number CT101/G/23713/24
DATE:05 October 2024
*/
#include<stdio.h>
int main () {  
int start, stop, sum;
printf("enter the value to start");
scanf("%d",&start);
printf("enter the value to stop");
scanf("%d",&stop);
for(start; start<=stop;start++) {printf("%d\n",start*start); 
sum+= start;}
printf("the sum is %d",sum);
return 0;
}