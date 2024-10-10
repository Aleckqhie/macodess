//for loop -output numbers 1-30
/*code crreator is Alex Mwangi
regustration  number is CT101/G/23713/24
Date 10 october 2024*/
#include<stdio.h>
int main () {
int i, sum=0;
for (i=30;i>0;i--) {printf("%d\n",i*i);
sum = sum + i;}
printf(" the sum is%d",sum);
return 0;
}