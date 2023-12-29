#include<stdio.h>
int fibo(int n){
	if(n<=0){
		return 1;
	}
	else{
	static int n1=0,n2=1,n3;
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%d ",n3);
	fibo(n-1);
}
}
int main(){
	int n=10;
	printf("0 1 ");
	fibo(n-2);
}
