#include<stdio.h>
void main()
{
	int a,b,ans;
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b :");
	scanf("%d",&b);
	
	int *p,*q;
	p=&a;
	q=&b;
	ans=(*p+*q);
	printf("%d\n",ans);
}
