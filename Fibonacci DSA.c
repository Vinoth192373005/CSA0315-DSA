#include<stdio.h>
int main(){
	int n=10,i;
	static int n1=0,n2=1,n3;
	printf("0 1 ");
	for(i=0;i<n-2;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
	}
}
