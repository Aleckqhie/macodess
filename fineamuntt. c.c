/*programme to find the fineamunt generated by a library
code creator Alex Mwangi Ndaguri
registration number CT101/G/23713/24
*/
//Preprocessor directives printf(), scanf() 
#include<stdio.h>
int main () {
int bookid,duedate, returndate,daysoverdue,finerate, fineamount;
printf("enter the bookid\n");
scanf("%d",&bookid);
printf("enter the duedate\n");
scanf("%d",&duedate);
printf("enter return date\n");
scanf("%d",&returndate);
//the number of days overdue should not be negative later affecting the fineamunt
 if (returndate >=duedate){daysoverdue=returndate- duedate;}
 //assumption is that all months are of 30 days for one not to get a negative days overdue
 else{daysoverdue=30-duedate+returndate;}
printf("%d",duedate);
if(daysoverdue==0){finerate=0;} 
//multiple conditions
else if(daysoverdue<=7){finerate =20;}
else if(daysoverdue<=14) {finerate=50;}
else {finerate=100;}
fineamount=finerate*daysoverdue;
printf("the book id is %d\n",bookid);
printf("duedate is %d\n",duedate);
printf("returndate is%d\n",returndate);
printf("number of days overdue are%d\n",daysoverdue);
printf("the fineamount is%d\n",fineamount);
return 0;
}