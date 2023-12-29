#include<stdio.h>
int f=-1,r=-1;
int queue[5];
int size=5;
void enqueue(){
	int a;
	printf("Enter a value");
	scanf("%d",&a);
	if(r==size-1){
		printf("Queue is full");
	}
	else{
		queue[r]=a;
		r++;
	}
}
void dequeue(){
	if(f==r){
		printf("Queue is empty");
	}
	else{
		
		printf("%d",queue[f]);
		f++;
		if(f==r){
			f=r=-1;
		}
	}
}
void display(){
	int i;
	for(i=f;i<=r;i++){
		printf("%d ",queue[i]);
	}
}
int main(){
	int choice;
	while(1){
		printf("Enter a choice 1.Enqueue,2.Dequeue,3.Display,4.exit\n");
		scanf("%d",&choice);
		switch(choice){
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
