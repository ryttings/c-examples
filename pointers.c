#include "helpers.h"
#include <stdint.h>

// Binary (2) = base 2
// Hexadecimal (6 + 10) = base 16 = 2^4
// We can represent 4 binary digits as 1 hex digit
// which is neat
//
// Binary | Hexadecimal 
// 0b0000 | 0x0
// 0b0001 | 0x1
// 0b0010 | 0x2
// 0b0011 | 0x3
// 0b0100 | 0x4
// 0b0101 | 0x5
// 0b0110 | 0x6
// 0b0111 | 0x7
// 0b1000 | 0x8
// 0b1001 | 0x9
// 0b1010 | 0xA
// 0b1011 | 0xB
// 0b1100 | 0xC
// 0b1101 | 0xD
// 0b1110 | 0xE
// 0b1111 | 0xF

// bit 0/1
// Byte = 8 bits
// Memory is Byte addressable -- each byte has an address

// Address - the byte index of a variable or function
// 	> The & operator returns the address of the identifier after it
//

// 3  |  10101111
// 2  |  00110110
// 1  |  11110000
// 0  |  10100011

int main(){
    int thingA = /*hexadecimal*/ 0xA; // 10 in decimal
    int thingB = /*hexadecimal*/ 0xB; // 11 in decimal
    int thingC = /*hexadecimal*/ 0xC; // 12 in decimal
    
    // size_t is the size of a pointer
    //      on a "32 bit" system, it's 32 bits
    //      on a "64 bit" system, it's 64 bits
    // size_t == 64 bit unsigned integer
    uint64_t base = (uint64_t)&thingA;
    //              ^ This is a *cast*
    //                it turns a thing into another thing

    lineprint((uint64_t)&thingA - base); // 0
    lineprint((uint64_t)&thingB - base); // 4
    lineprint((uint64_t)&thingC - base); // 8
    lineprint(sizeof(thingA));

    lineprint(thingA);
    lineprint(thingB);
    lineprint(thingC);
}

