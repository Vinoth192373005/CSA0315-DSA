 #include<stdio.h>
 void main(){
 	int first,last,middle,n,i,search,arr[100];
 	printf("\nEnter the size of the array:");
 	scanf("%d",&n);
 	printf("\nEnter the elements in ascending order:");
 	for(i=0;i<n;i++)
 		scanf("%d",&arr[i]);
	 
	printf("\nEnter the element to be searched:");
	scanf("%d",&search);
	 first=0;
	 last=n-1;
	 middle=(first+last)/2;
	 while(first<=last){
	 	if(search>arr[middle]){
	 		first=middle+1;
	 		middle=(first+last)/2;
		 }
		else if(search==arr[middle]){
			printf("Element found at %d",middle);
			break;
		}
		else{
			last=middle-1;
			middle=(first+last)/2;
		}
	 }
	 if(first>last){
	 printf("Element not found");
    }
 }
