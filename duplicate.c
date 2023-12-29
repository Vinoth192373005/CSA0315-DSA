#include<stdio.h>
int main(){
	int arr[8]={1,2,2,3,3,6,4,5};
	int i,j;
	int n=8;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				printf("%d",arr[j]);
			}
			
		}
	}
}
