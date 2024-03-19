// insert order singly linked list //
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *first;
void insert_ord(int x)
{
	struct node *new_node,*save,*prev;
    new_node = (struct node*)malloc(sizeof(struct node *));
    	new_node->info=x;
    if (new_node == NULL)
    {
        printf(" Memory Not Available ");
        return;
    }
    else if(first==NULL)
    {	
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
		save=prev=first;
		while((save!=NULL)&&(new_node->info>=save->info))
		{
			prev=save;
			save=save->link;
		}
		new_node->link=save;
		prev->link=new_node;
	}
}
void display()
{
	 struct node *save;
    if (first == NULL)
    {
        printf("List is Empty");
    }
    else
    {
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
		printf("\n----- Insert Order -----\n");
		printf("\n1. Insert \n2. Display \n0. Exit");
		printf("\n Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n Enter Value : ");
				scanf("%d",&x);
				insert_ord(x);
				break;				
			case 2:
				display();
				break;				
			default:
				printf("\n Invalid Choice ");
				getch();
				break;
			case 0:
				exit(0);
				break;
            
		}
	}
	return 0;
}

