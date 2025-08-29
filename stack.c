#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include "helpers.h" // Macros to print lines of code and their values

/// Concepts:
///
/// Memory - a big pool of 1s and 0s, addressable by byte
///
/// Address - the byte index of a variable or function
/// 	> The & operator returns the address of the identifier after it
///
/// Pointer - a memory address, which can be associated with a type
/// 	> Pointers can be "dereferenced" with the * operator,
///       which looks up the bits in memory at the pointer's addresss
///       and interprets it as the pointer's type

int main(){
	int a = 0xA; //0b1010
	int b = 0xB; //0b1011
	long long c = 0xC; //0b1100
	
	int* pa = &a; // pointer to integer A, stores a memory address
	int* pb = &b;

    lineprint((uint64_t*)&b - (uint64_t*)&a); //????

	printf("address a (int) = %llx, \naddress b (int) = %llx, \naddress (long long <int>) c = %llx\n", &a, &b, &c);

	lineprint(sizeof(a));
	lineprint(sizeof(b));
	lineprint(sizeof(c));

	// Note that pointers are just numbers, and can be cast to normal integer types
	// "casting" tells the compiler to interpret one type as a different one
	// and is done with the (type) operator
	unsigned long long addrA = (uint64_t)&a; // 
	unsigned long long addrB = (uint64_t)&b;
	unsigned long long addrC = (uint64_t)&c;

	lineprint(sizeof(addrA));
	lineprint(sizeof(addrB));
	lineprint(sizeof(addrC));

	// Since these are just numbers, we can do math on them and then dereference them
	int d = *(int*)((size_t)&c + 8);
	long long e = *(long long*)((size_t)&b);
	lineprint(d);
	lineprint(&e);
	lineprint(e);

	// Bit shifting: moving 32 bits right leaves us with just the upper 4 bytes of our 8 byte value: a
	// moving 32 bits left leaves us with just our lower 4 bytes, but in the upper half of the register
	// we can shift it back 32 bits to see our original "b"
	lineprint(e >> 32);
	lineprint((e << 32) >> 32);

	return 0;

	
}
