#include<stdio.h>
int main(){
	int a[5]={3,17,15,32,12};
	int i,j,temp;
	int n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}
