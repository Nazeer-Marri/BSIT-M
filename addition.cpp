#include<stdio.h>
int main()
{
	int arr[]={1,6,0,3,8,9,0,2};
	int i,count=0;
	int n=8;
	for(i=0;i<n;i++)
	{
		if(arr[i]>0){
			arr[count++]=arr[i];
		}
		while(count<n){
			arr[count++]=0;
		}
		for(i=0;i<n;i++){
			
		}
		printf(" %d ",arr);
		
	}
	return 0;
}
	//int a[3][3],b[3][3],c[3][3],i,j;
//	printf("enter 9 number for frist matrix:");
//	for(i=0;i<=3;i++)
//	for(j=0;j<=3;j++)
//	scanf("%d",&a[i][j]);
//		printf("enter 9 number for second matrix:");
//			for(i=0;i<=3;i++)
//	for(j=0;j<=3;j++)
//	scanf("%d",&b[i][j]);
//	printf("dividing of matrix is\n");
//	for(i=0;i<=3;i++)
//     
//      	for(j=0;j<=3;j++)
//				 c[i][j]=a[i][j]/b[i][j];
//		printf("%d ",c[i][j]);
//	 
//			        printf("\n");
//			        return 0;
		  
        	
