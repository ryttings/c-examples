#include "helpers.h"
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

int main(){

	//Arrays are pointers to a repeated block of a specific type
	int a[10]; //Declare an array of 10 integers
	for (int i = 0; i < 10; i++){
		a[i] = i; // The [] operator is the array access operator,
			  // which returns the value at index i.
			  // It is equivalent to *(a + i)
	}
	lineprint(&a[0]);
	lineprint(&a[1]);
	lineprint(&a[2]);

	int* pa = a;
	lineprint(pa);
	lineprint(pa + 1);
	lineprint(a + 1);
	lineprint(pa[1]);
}
