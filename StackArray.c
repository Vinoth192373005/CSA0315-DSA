#include<stdio.h>
    int n=-1;
	int arr[5];
	int size=5;
	int o,a;
void push(){
	if(n==size-1){
		printf("Overload");
		return 0;
	}
	else{
		printf("Enter a number to push");
		n=n+1;
		scanf("%d",&arr[n]);
		return 0;
	}
}
void pop(){
	if(n==-1){
		printf("Underload");
	}
	else{
		printf("popped %d",arr[n]);
		n=n-1;
	}
}
void display(){
	int i;
	for(i=0;i<=n;i++){
		printf("%d",arr[i]);
	}
}
int main(){
	int a;
	while(1){
		printf("\n1.push,2.pop,3.display,4.exit\n");
		scanf("%d",&a);
		switch(a){
			case 1:
				push();
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
