#include<stdio.h>

int main() {

         
         
         int limit = 2;
         int arr[limit][limit];
         
         int *p;
         
         for(p = &arr[0][0];p <= &arr[limit-1][limit-1];p++) {
         	
         	scanf("%d",*&p);
		 }
		 
		 for(p = &arr[0][0];p < &arr[limit][limit];p++) {
		 	printf("%d ",*arr);
			//printf("%d ",arr);
			//printf("%d ",*arr[1]);
		 	//printf("%d ",arr[1]);
		 }
}
