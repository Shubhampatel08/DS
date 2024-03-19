// lab no:11--1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,*ptr,i,sum=0;
	printf("Enter the size of :");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element::",i+1);
		scanf("%d",&ptr[i]);
		sum=sum+ptr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nsum=%d",sum);
	return 0;
}
