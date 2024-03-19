#include<stdio.h>
void main()
{
	int a,*pa;
	float b,*pb;
	char c,*pc;
	 long double d,*pd;
	printf("enter a,b,c,d");
	scanf("%d %f %s %ld",&a,&b,&c,&d);
	
	pa=&a;
	pb=&b;
	pc=&c;
	pd=&d;
	
	printf("%d\n",*pa);
	scanf("%u",&a);
	printf("%f\n",*pb);
	scanf("%u",&b);
	printf("%s\n",*pc);
	scanf("%u",&c);
	printf("%id\n",*pd);
	scanf("%u",&d);g
}

