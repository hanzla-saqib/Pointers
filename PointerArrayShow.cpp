#include<stdio.h>
#include"input.h"

int main() {
	
	int limit;
	
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
	
	int *arrPointer;
	
	for(int i = 0 ; i < limit; i++) {
		
		arrPointer = &arr[i];
		
		printf("%d  ",*arrPointer);
	}
	
	
}
