#include<stdio.h>
void merge(int arr[],int l,int m,int h){
	int i,j,k;
	int n1=m-l+1;
	int n2=h-m;
	int larr[10];
	int rarr[10];
	for(i=0;i<n1;i++){
		larr[i]=arr[l+i];
	}
	for(j=0;j<n2;j++){
		rarr[j]=arr[m+1+j];
	}
	i=0;
	j=0;
	k=l;
    while(i<n1&&j<n2){
	   if(larr[i]<rarr[j]){
	     	arr[k]=larr[i];
		    i++;
	   }
	   else{
	    	arr[k]=rarr[j];
		    j++;
	}
	k++;
}
    while(i<n1){
    	arr[k]=larr[i];
    	i++;
    	k++;
	}
	while(j<n1){
    	arr[k]=rarr[j];
    	j++;
    	k++;
 }
}
void mergeSort(int a[], int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
    }  
} 
int main(){
	int arr[6]={10,7,1,2,9,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int l=0;
	int h=n-1;
	int m=(h+l)/2;
	mergeSort(arr,l,h);
	int a;
	for(a=0;a<n;a++){
		printf("%d ",arr[a]);
	}
}

