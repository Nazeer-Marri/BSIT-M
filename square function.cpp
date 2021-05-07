#include<stdio.h>
int power (int base,int exponent);
int main()
{
	int base=0,exponent=0,result=0;
	printf("\nenter the value for base\t");
	scanf("%d",&base);
	printf("\n enetr value for exponent\t");
	scanf("%d",&exponent);
	result=power(base,exponent);
	printf("\n %d to the power %d is %d",base,exponent,result);
	return 0;
}
int power(int base,int exponent)
 {
	int result=1,count=0;
	for(count=0;count<exponent;count++)
	{
		result*=base,exponent;
	}
	
		return result;
	}

