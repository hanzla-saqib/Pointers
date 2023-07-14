#include<stdio.h>

int PointerSwaping(int *num1,int *num2);
int main() {
	//4.Write a function to use pass by pointers and swap two numbers. 
	
	int num1 = 5,num2 = 6;
	
	PointerSwaping(&num1,&num2);
	
	printf("Num1 = %d Num2 = %d",num1,num2);
}

int PointerSwaping(int *num1,int *num2) {
	
	//printf("%d",*num1);
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}
