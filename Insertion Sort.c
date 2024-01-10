#include<stdio.h>
int main(){
	int arr[13]={8,9,21,10,20,19,11,12,18,1,2,3,4};
	int n=13;
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
		arr[j+1]=arr[j];
		j--;
	   }
	    arr[j+1]=temp;
   }
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
}
