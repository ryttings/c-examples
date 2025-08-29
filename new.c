// Comments
/* also a comment 
 *
 *
 */

#include <stdio.h> // Preprocessor directive:
#include "helpers.h"

// Happens *before* compilation
// 1. Preprocessor <- Copy & Paste
// 2. Compiler
// 3. Linker

// Conventions:
// 1. System headers are included as <filename.h>
//      - It tells the compiler to look in /usr/include first
// 2. User header files are included as "filename.h"

// Both of these will still look in the same places for include files,
// just different orders

// Every C program needs a main function
//
// Params:
// int argc (integer: argument count)
// char** argv (array of strings: argument values)
int main(int argc, char** argv){

	lineprint(argc); // Number of arguments

    // The first argument is the name of the compiled program
	printf("%s\n", argv[0]);

    // If you run this program with fewer than two arguments
    // this will cause a segmentation fault!
	printf("%s\n", argv[1]);

	return 0; //Convention is to return 0 for a successful run
}

// github.com/ryttings/c-examples
