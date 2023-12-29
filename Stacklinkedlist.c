#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*top;
void push(int a){
	struct node*newnode;
	if(top==NULL){
		top=(struct node*)malloc(sizeof(struct node));
		top->data=a;
		top->next=NULL;
	}
	else{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=a;
		newnode->next=top;
		top=newnode;
	}
	
}
void pop(){
	if(top==NULL){
		printf("Underflow");
	}
	else{
		struct node*temp=top;
		printf("Deleted %d",temp->data);
		top=temp->next;
		free(temp);
	}
}
void display(){
	if(top==NULL){
		printf("Empty");
	}
	else{
		struct node*temp=top;
		while(temp!=NULL){
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
int main(){
	int i,a;
	while(1){
		printf("\n1.push,2.Pop,3.Display,4.Exit");
		scanf("%d",&i);
		switch(i){
			case 1:
				printf("Enter element to push");
				scanf("%d",&a);
				push(a);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		   case 4:
		   	return 0;
		}
	}
}
