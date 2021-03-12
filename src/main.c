/*
	list of functions in string.h       https://fresh2refresh.com/c-programming/c-function/string-h-library-functions/
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char *function;
	function = malloc(256);
    
	printf("Enter a C function from string.h that you want to translate to Py\n");
	scanf("%255s", function); // Don't read more than 255 chars
	
	if((strcmp(function, "strlen")) == 0){
		printf("\n\n--------------------------------\n\n");
		printf("counter = 0\n");
		printf("for c in \"educative\": # traverse the string “educative”\n");
		printf("\tcounter+=1 #increment the counter\n");
		printf("print(counter) # outputs the length (9) of the string “educative”\n");
		printf("\n--------------------------------\n\n");
	}
	
	free(function);
	return 0;
}
