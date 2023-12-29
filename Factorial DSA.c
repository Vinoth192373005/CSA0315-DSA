#include<stdio.h>
int main(){
	int n=5,i;
	long fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("%ld",fact);
}
