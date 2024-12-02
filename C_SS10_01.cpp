#include<stdio.h>
 int main(){
 	int arr[5]={1,4,6,3,2};
	 printf("mang ban dau la: \n");
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
		 
	}
	printf("\n");
	for (int i=0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){ 
			int temp;
			temp= arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
			 
		} 
	}
	printf("mang sau khi sap xep la: \n");
	for (int i=0;i<5;i++){
		printf("%d",arr[i]); 
	} 
 } 
