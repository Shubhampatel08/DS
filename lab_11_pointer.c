//pointer

#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the size of::");
	scanf("%d",&n);
	int n1[n],*ptr;
	ptr=&n1[0];
		
	for(int i=0;i<n;i++)
	{
		printf("Enter the %d element::",i+1);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	return 0;
}
