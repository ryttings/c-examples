// Comments can be written like this
/* or like this
 * (look new line!)
 */

// Include files with the #include macro
#include <stdio.h> // Convention is to include system files as <filename.h>
#include "helpers.h" // and your files as "filename.h"

// This include macro is part of a larger group of preprocessor macros
// which we will cover more later

// Every C program needs a main function
//
// argc (integer argument count)
// argv (array of strings: argument values)
int main(int argc, char** argv){
	lineprint(argc);
	printf("%s\n", argv[0]); // The first argument is the name of the compiled program
	printf("%s\n", argv[1]); // If you run this program with fewer than two arguments, this will cause a segmentation fault!
	return 0; //Convention is to return 0 for a successful run
}

// If no arguments are required, main can also be declared without them:
// int main(){
// 	return 0;
// }
//
// And if there's no error handling in the program, you can even declare it as returning "void" (nothing), and it will always return 0
//
// void main(){
// }
