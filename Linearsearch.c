#include<stdio.h>
int main(){
	int arr[100];
	int n,i,s;
	printf("Enter the size and elements of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(arr[i]==s){
			printf("Element is found at %d",i);
			return 0;
			break;
		}
	}
	printf("Element is not found");
}
