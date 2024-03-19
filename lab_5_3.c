#include<stdio.h>

struct complex{
	float real;
	float img;
};
struct complex add(struct complex n1,struct complex n2){
	struct complex result;
	result.real=n1.real+n2.real;
	result.img=n1.img+n2.img;
	return(result);
}
int main(){
	struct complex n1,n2,sum;
	printf("Enter real No n1:");
	scanf("%f",&n1.real);
	printf("Enter img No n2:");
	scanf("%f",&n1.img);
	printf("Enter real No n1:");
	scanf("%f",&n2.real);
	printf("Enter img No n2:");
	scanf("%f",&n2.img);
	sum=add(n1,n2);
	printf("sum of real number is::%.1f\n",sum.real);
	printf("sum of img number is::%.1f\n",sum.img);
	return 0;
}
