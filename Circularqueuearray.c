#include<stdio.h>
#define max 6
int arr[max];
int front=0,rear=0,count=0;
void insert(){
	int data;
	if(count==max){
		printf("Circular queue is full");
	}
	else{
		printf("Enter a value");
		scanf("%d",&data);
		arr[rear]=data;
		rear=(rear+1)%max;
		count++;
	}
}
void delete(){
	if(count==0){
		printf("Empty");
	}
	else{
		printf("Deleted %d",arr[front]);
		front=(front+1)%max;
		count--;
	}
}
void display(){
	int i;
	for(i=0;i<rear;i++){
		printf("%d",arr[i]);
	}
}
int main(){
	int a;
	while(1){
		printf("1.insert,2.delete,3.display,4.display");
		scanf("%d",&a);
		switch(a){
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
		}
	}
}
