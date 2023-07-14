#include<stdio.h>

int main() {
	
	char string[20];
	
	fgets(string,20,stdin);
     
	 int i = 0;
	 
	while(string[i] != '\0') {
		
		if(string[i] >= 'a' && string[i] <= 'z') {
			
			string[i] = 65 + string[i] % 97;
			
		}
		printf("%c",string[i]);
		i++;
	}
	
}
