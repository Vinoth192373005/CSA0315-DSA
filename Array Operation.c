#include<stdio.h>                                                                                                                 
int main(){
	int arr[100];
	int n,i,o,j,a,a1,b,c,c1;
	printf("Enter the size of the array and the elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);                                          
	}
	printf("\n1.Traverse\n2.Insert\n3.Delete\n4.Update\n5.Exit");
	while(o!=5){
		printf("\nEnter your choice ");
		scanf("%d",&o);
	switch(o){
		case 1:
			for(i=0;i<n;i++){
				printf("%d",arr[i]);
			}
			break;
		case 2:
			printf("\nEnter the index and element to be inserted");
			scanf("%d%d",&a,&a1);
			for(i=n-1;i>=a;i--){
				arr[i]=arr[i-1];
			}
			arr[i]=a1;
			for(i=0;i<n;i++){
				printf("%d",arr[i]);
			}
			break;
		case 3:
			printf("\nEnter the index of the element to be deleted");
			scanf("%d",&b);
			for(i=b;i<n;i++){
				arr[i]=arr[i+1];
			}
			for(i=0;i<n-1;i++){
				printf("%d",arr[i]);
			}
			n=n-1;
			break;
		case 4:
			printf("\nEnter index and element to be updated");
			scanf("%d%d",&c,&c1);
			arr[c]=c1;
			for(i=0;i<n;i++){
				printf("%d",arr[i]);
			}
			break;
	    case 5:
	    	return 0;
	}
  } 
}
