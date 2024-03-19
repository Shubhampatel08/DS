#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;

void push(int data) {
    Node* temp = (Node*)malloc(sizeof(Node));
    if(temp == NULL) {
        printf("Heap overflow\n");
        exit(0);
    }
    temp->data = data;
    temp->next = top;
    top = temp;
}

int isEmpty() {
    return top == NULL;
}

int peek() {
    if(!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop() {
    Node* temp;
    if(top == NULL) {
        printf("Stack underflow\n");
        exit(1);
    } else {
        temp = top;
        top = top->next;
        temp->next = NULL;
        free(temp);
    }
}

void display() {
    Node* temp;
    if(top == NULL) {
        printf("Stack underflow\n",display);
        exit(1);
    } else {
        temp = top;
        while(temp != NULL) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
    }
}

void main() {
    int choice, val;
    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter the value to be pushed: ");
                    scanf("%d", &val);
                    push(val);
                    break;
            case 2: pop();
                    break;
            case 3: printf("Top most element is %d\n", peek());
                    break;
            case 4: display();
                    break;
        }
    } while(choice != 5);
   
}

 for(a=10;a<=10;a++);
 {
 	printf(a);
 }
 	
		


