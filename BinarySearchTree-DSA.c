#include<stdio.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
};
struct node*root=NULL;
struct node *insert(struct node*,int);
int count=0;
void main(){
	int value;
	int choice;
	while(1){
		printf("\n1.Insert,2.Display,3.Exit:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter a value");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2:
				display(root);
				break;
			case 3:
				return 0;
				
		}
	}
}
struct node*insert(struct node*root,int value){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	if(root==NULL){
		newnode->left=newnode->right=NULL;
		root=newnode;
	}
    else if (value < root->data)  
        root->left = insert(root->left,value);  
    else  
        root->right = insert(root->right,value);  
    return root;  
}  
void display(struct node*root){
	if(root!=NULL){
		display(root->left);
		printf("%d ",root->data);
		display(root->right);
	}
}
