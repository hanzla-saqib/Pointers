#include<stdio.h>

int main() {
	
	//5.Write a program to find the sum of 2 numbers returning a pointer.
	
	int num1 = 2,num2 = 4,sum;
	
              	
	sum = num1 + num2;
	printf("Addition of two numbers by pointers\n");
	printf("The sum of the number %d and %d is = %d",num1,num2,&sum);
}

