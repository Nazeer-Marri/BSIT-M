#include<stdio.h>
int main()
{
  int temp[5];
  int index=0,sum=0;
  for (index=0;index<5;index++)
{
	printf("\n sum of array temp is %d");
	scanf("%d",&temp[index]);
	sum=sum+temp[index];
}
   printf("\n  the sum of array is temp %d",sum);
   printf("\n the aveg of is %d",sum/5);
//rintf("$d+$d=$d",3,5,3+5);
//	 printf("\n my name is%s,nazeer");
	
	return 0;
}


