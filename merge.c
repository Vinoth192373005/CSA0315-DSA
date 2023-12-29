#include<stdio.h>
int main(){
	int arr1[4]={9,8,7,6};
	int arr2[4]={5,4,3,2};
	int arr[25];
	int i,j,k;
	int n=4;
	int a=0;
	for(i=0;i<n;i++){
		arr[i]=arr1[i];
	}
	for(j=0;j<n;j++){
		arr[i++]=arr2[j];
	}
	for(i=0;i<(2*n);i++){
		printf("%d",arr[i]);
	}
}
