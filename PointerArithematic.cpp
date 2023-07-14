#include<stdio.h>

int main() {
	
	int num1 = 4;
	int num2 = 5;
	
	int *numm1 = &num1;
	int *numm2 = &num2;
	
	
	numm1 = numm1 - 1;
	numm2 = numm2 + 1;
	
	printf("%d %d\n",*numm1,*numm2);
	
	*numm1 = 3;
	*numm2 = 7;
	
	printf("%d %d\n",num1,num2);
	
	 
}
