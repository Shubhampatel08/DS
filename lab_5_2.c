// lan no 5 

#include<stdio.h>

struct stud_details{
	int stud_enroll_no;
	char stud_name[50];
	int stud_sem;
	float stud_cpi;
};

int main(){
	struct stud_details s[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Enter stuednt Enrollmnet NUmber:");
		scanf("%d",&s[i].stud_enroll_no);
		printf("Enter stuednt Name:");
		scanf("%d",&s[i].stud_name);
		printf("Enter stuednt sem:");
		scanf("%d",&s[i].stud_sem);
		printf("Enter stuednt cpi:");
		scanf("%d",&s[i].stud_cpi);
	}
	for(i<0;i<2;i++){
		printf("/nStudent Enrollmnet NUmber::%d",s[i].stud_enroll_no);
		printf("/nStudent Name::%d",s[i].stud_name);
		printf("/nStudent sem::%d",s[i].stud_sem);
		printf("Student cpi::%d",s[i].stud_cpi);
	}
	return 0;
}
