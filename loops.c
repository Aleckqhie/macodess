//program for ehile looop promptimg the uuser to enter their values
/*code creator is Alex Mwangi
registatrtion  umber is CT101/G/23713/24
Date 10 october 2024
*/
#include<stdio.h>
int main(){
int start,stop,sum=0;
printf ("enter the value to start");
scanf ("%d",&start);
printf ("enter the value to stop");
scanf("%d",&stop);
while (start<stop){
    printf("%d\n",start);
start ++;
}
    return 0 ;
}