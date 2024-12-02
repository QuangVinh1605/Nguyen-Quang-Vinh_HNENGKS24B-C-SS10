#include <stdio.h>
int main(){
	int arr[5]={1,3,2,5,4};
	printf("mang ban dau la: \n");
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
		 
	} 
	printf("\n");
	for(int i=0;i<5;i++){
		int minIndex=i;
		for(int j=i+1;j<5;j++){
		if(arr[j]<arr[minIndex]){
			minIndex=j; 
		}
	}
	int temp=arr[minIndex];
	arr[minIndex]=arr[i];
	arr[i]=temp; 
	}
	printf("mang moi la: \n");
	for (int i=0;i<5;i++){
		printf("%d",arr[i]); 
	} 
} 
