#include <stdio.h>

int main(){
	
	int input,space;
	
	int i,j;
	
	input = 5;
	
	for(i=0;i<input;i++){
		
		space = (input-1) - i;
		for(j=0;j<space;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		
		
		printf("\n");
	}
	
	for(i=input-2;i>=0;i--){
		
		space = (input-1) - i;
		for(j=0;j<space;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		
		
		printf("\n");
	}
	
	return 0;
}
