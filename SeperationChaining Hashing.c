#include<stdio.h>
#include<stdlib.h>
#define n 10
struct node{
	int data;
	struct node*next;
};
struct node*chain[7];
void empty(){
	int i;
	for(i=0;i<n;i++){
		chain[i]=NULL;
	}
}
void insert(int value){
	struct node*newnode=malloc(sizeof(struct node));
	int key;
	key=value%n;
	newnode->data=value;
	newnode->next=NULL;
	if(chain[key]==NULL){
		chain[key]=newnode;
	}
	else{
		struct node*temp=chain[key];
		while(temp->next){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void print(){
	int i;
	for(i=0;i<n;i++){
		struct node*temp=chain[i];
		printf("Chain[%d]->",i);
	    while(temp!=NULL){
		printf("-->%d",temp->data);
		temp=temp->next;
		}
		printf("\n");
    }
}
int main(){
	empty();
	insert(10);
	insert(11);
	insert(81);
	insert(7);
	insert(34);
	insert(94);
	insert(29);
	print();
}

