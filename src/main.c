/*
	list of functions in string.h       https://fresh2refresh.com/c-programming/c-function/string-h-library-functions/
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	// list of functions

	const char *strlen_func =
	"\n\ncounter = 0\n"
	"for c in \"educative\": # traverse the string “educative”\n"
		"\tcounter+=1 #increment the counter\n"
	"print(counter)\n\n";

	const char *strcpy_func =
	"\n\ndef strcpy( x, y ):\n"
	"\t# copies string y into string x\n"
	"\tx = y\n"
	"\treturn x\n\n";

	const char *strdup_func =
	"\n\ndef strdup( x ):\n"
	"\treturn x\n\n";

	const char *strrev_func =
	"\n\ndef strrev(x):\n"
  "\treturn x[::-1]\n\n";

	const char *strset_func =
	"\n\ndef strset( x, char ):\n"
	"\tx = len(x) * char\n"
	"\treturn x\n\n";

	// end of list of functions


	char *function;
	function = malloc(256);

	printf("Enter a C function from string.h that you want to translate to Py\n");
	scanf("%255s", function); // Don't read more than 255 chars

	if((strcmp(function, "strlen")) == 0){
		printf("%s", strlen_func);
	} else if(strcmp(function, "strcpy") == 0) {
		printf("%s", strcpy_func);
	} else if(strcmp(function, "strdup") == 0) {
		printf("%s", strdup_func);
	} else if(strcmp(function, "strrev") == 0) {
		printf("\nEven though strrev is exclusive for older Microsoft C, the python equivalent will work on every system\n\n");
		printf("%s", strrev_func);
	} else if(strcmp(function, "strset") == 0) {
		printf("%s", strset_func);
	}

	free(function);
	return 0;
}
