// insert order singly linked list

#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *first,*save,*prev;
void insert_ord(int x)
{
	struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    if (new_node == NULL)
    {
        printf("Memory Not Available.!");
        return;
    }
    else if(first==NULL)
    {
    	new_node->info=x;
    	first=new_node;
    	new_node->link=NULL;
	}
	else if(new_node->info<=first->info)
	{
		new_node->info=x;
		new_node->link=first;
		first=new_node;
	}
	else
	{
		new_node->info=x;
		save=prev=first;
		while((save!=NULL)&&(new_node->info>=save->info))
		{
			prev=save;
			save=save->link;
		}
		new_node->link=save->link;
		prev->link=new_node;
	}
}

void display()
{
    if (first == NULL)
    {
        printf("List is Empty.!");
    }
    else
    {
        struct node *save;
        save = first;
        while (save != NULL)
        {
            printf("%d ", save->info);
            save = save->link;
        }
    }
}

int main()
{
	int choice,x;
	while(1)
	{
//		system("cls");
		printf("\n----- Insert Order -----\n");
		printf("\n1. Insert \n2. Display \n0. Exit");
		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter Value : ");
				scanf("%d",&x);
				insert_ord(x);
//				getch();
				break;
				
			case 2:
				display();
//				getch();
				break;
				
			default:
				printf("\nInvalid Choice.!");
//				getch();
				break;
				
			case 0:
				exit(0);
				break;
		}
	}
	return 0;
}
