#include<stdio.h>
#include<stdlib.h>
#define n 10
int arr[10];
void empty(){
	int i;
	for(i=0;i<n;i++){
		arr[i]=NULL;
	}
}
void insert(int value,int i){
	int key=(value+i)%n;
	if(arr[key]==NULL){
		arr[key]=value;
	}
	else{
		i++;
		insert(value,i);
	}
}
void print(){
	int i;
	for(i=0;i<n;i++){
		printf("%d| %d\n",i,arr[i]);
	}
}
void delete(int a){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==a){
			arr[i]=NULL;
		}
	}
}
int main(){
	insert(89,0);
	insert(18,0);
	insert(49,0);
	insert(58,0);
	insert(69,0);
	print();
}
