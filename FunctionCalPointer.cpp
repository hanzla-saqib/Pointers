#include<stdio.h>

int mul(int i, int y) {
	
	return i * y;
}

int main() {
	
	int (*MulPoint)(int , int);
	
	MulPoint = &mul;
	
	int res = MulPoint(4,5);
	
	printf("%d",res);
}

