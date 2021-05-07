#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("please enter two integer number");
	scanf("%d%d",&a,&b);
	if(a<=b)
	printf("%d<=%d\n",a,b);
	else
	printf("%d>%d\n",a,b);
	return 0;
}
