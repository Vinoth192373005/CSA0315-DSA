#include<stdio.h>
struct node{
	int data;
	struct node*next;
};
struct node*f=NULL;
struct node*r=NULL;
void enqueue(){
	int a;
	printf("Enter a value");
	scanf("%d",&a);
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=a;
	newnode->next=NULL;
	if(f==NULL && r==NULL){
		f=r=newnode;
	}
	else{
		r->next=newnode;
		r=newnode;
	}
}
void dequeue(){
   struct node*temp=malloc(sizeof(struct node));

   if(f==NULL&&r==NULL){
   	printf("Queue Empty");
   }
   else{
     	temp=f;
        f=f->next;
   	   printf("%d",temp->data);
	   free(temp);
   }
}
void display(){
	if(f==NULL){
		printf("NULL");
	}
	else{
	 struct node*temp=malloc(sizeof(struct node));
	 temp=f;
	 while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	 } 
   }
}
int main(){
	int x;
	while(1){
		printf("\n1.enqueue 2.dequeue 3.display 4.exit\n");
		scanf("%d",&x);
		switch(x){
			case 1:
				enqueue();
				break;
			case 2:
			    dequeue();
				break;
			case 3:
			    display();
				break;
			case 4:
			    return 0;	
		}
	}
}
