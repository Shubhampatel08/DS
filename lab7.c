#include<stdio.h>
 void main()
 {
 int a=10;
 int *p;
 p=&a;
 
 printf("%d",*p);
 printf("address = %u",&a);
 }
