// queue prg lab-9
#include<stdio.h>
#define N 5
int Q[N];
int F=-1,R=-1;

void enqueue(int x)
{
	if(R>=N-1)
	{
		printf("overflow");
	}else{
		R++;
		Q[R]=x;
		if(F==-1)
		{
			F=0;
		}
	}
}

int dequeue()
{
	int y;
	if(F==-1){
		return -1;
	}else{
	   y=Q[F];
	   if(F==R){
	   	 F=R=-1;
	   }else{
	   	 F++;
	   }
	}return y;
}

void display()
{
	int i;
	if(F==-1){
		printf("underflow");
	}else{
		for(i=F;i<=R;i++){
			printf("%d\t",Q[i]);
		}
	}
}
int main(){
	int ch,y,x;
	printf("------manu-----\n");
	printf("1.Enqueue\n2.deuqueue\n3.Display\nPress -1 to Exit");
	printf("\nEnter Your choice");
	scanf("%d",&ch);
	while(ch!=-1){
		switch(ch){
			
			case 1:
			      printf("Enter a number");
			      scanf("%d",&x);
			      enqueue(x);
			      break;
			
			case 2:
				   y=dequeue();
				   if(y==-1){
				   	printf("underflow");
				   }else{
				   	  printf("Dequeue elem id: %d",y);
				   }
				   break;
				
			case 3:
				 display();
				 break;
				 
				 default:
				 	printf("\n Invalid choice");
		}
		printf("Enter your choice:");
		scanf("%d",&ch);
	}
	return 0;
}
