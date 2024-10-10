//program to determine the total electricity bill
/*code creator Alex Mwangi
registration number CT101/G/23713/24
DATE:05 October 2024
*/
#include<stdio.h>
int main () {
int customersid, unitsconsumed;
float chargeperunit, totalbill;
char customersname[]={};
printf("enter the customersid");
scanf("%d",&customersid);
printf("enter the customersname");
scanf("%s",&customersname);
printf("enter the units comsumed by the customer");
scanf("%d",&unitsconsumed);
if (unitsconsumed<199) { chargeperunit=1.20;} 
else if (unitsconsumed<400) {chargeperunit=1.50;} 
else if (unitsconsumed<600) {chargeperunit=1.80;} 
else {chargeperunit=2.00;} 
totalbill= unitsconsumed*chargeperunit;
if (totalbill>400){totalbill+=totalbill *0.15;}
if (totalbill<100) {totalbill=100;}
printf("the customers id is %d\n",customersid);
printf("the customersname is %s\n",customersname);
printf("the charge per unit is %.2f\n",chargeperunit);
printf("the number of units consumed are %d\n",unitsconsumed);
printf("the total bill is %.2f\n",totalbill);
return 0;
}