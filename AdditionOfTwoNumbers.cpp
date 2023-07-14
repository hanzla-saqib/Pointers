#include<stdio.h>

int main() {
	
	int num1 = 2,num2 = 4,num3 = 5;
	
	int *numm1 = &num1;
	int *numm2 = &num2;
	int *numm3 = &num3;
	
    numm1 = numm1 - 2;
    numm3 = numm3 +2;
	int sum;
	
	sum = *numm1 + *numm2;
	printf("Addition of two numbers by pointers\n");
	printf("The   number1 contains address of numm3 %p and numm2 = %d\n numm1 contains value of numm3 %d\n numm3 contains address of numm1 = %d %d %d",numm1,numm2,*numm1,numm3,*numm3);
}
