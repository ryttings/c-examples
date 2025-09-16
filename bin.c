#include <stdio.h>

// Equivalent of _hex_str

//    ...
// [     ]
// [     ]
// [ 50  ]

int a[50]; // Declares an array of 50 integers
           // the variable "a" is a pointer to the base of this array
           // AKA index 0

int *b = a;     // a is just a pointer. So we can assign another pointer to it
int *c = &a[0]; // a is equivalent to the addresss of the fist element. So
                // & (address of) a [0] (first element) == a;

void doThings() {
  int *d = b;

  a[0] = 50;
  a[1] = 51;
  printf("%d\n", a[0]);
  printf("%d\n", a[1]);

  printf("%d\n", *b);
  printf("%d\n", *(b + 1));

  printf("%p\n", a);
  printf("%p\n", b);
  printf("%p\n", c);
}

void stringify(int num, char *result) {
  const char *lookup = "0123456789ABCDEF";
  int bitmask = 0b1111;
  int count = 0;

   // Bitwise operators:
   // & - Bitwise AND
   // | - Bitwise OR
   // ^ - Bitwise XOR
   // ~ - Bitwise NOT
   // >> - Shift Right
   //
   // 0b1100 >> 2 == 0b11
   // 0b1010 >> 2 == 0b10
   //
   // int a = 0b 1111'1111'1111'1111'1111'1111'1111'1111
   // a = a >> 16;
   // a == 0b 0000'0000'0000'0000'1111'1111'1111'1111
   //
   // << - Shift Left
   // 0b1100 << 2 == 0b110000

  while (1) {
    result[10 - count] = lookup[num & bitmask];
    // printf("Count: %d\n", count);
    // printf("Remainder: %d\n", num & bitmask);
    num >>= 4;
    count = count + 1;
    if (num == 0) {
      break;
    }
  }

  result[11] = (char)0;
}

void zero(char *buffer) {
  for (int i = 0; i < 10; i++) {
    buffer[i] = '0';
  }
}

int main() {
  char buffer[100];
  zero(buffer);
  stringify(0, buffer);
  printf("%s\n", buffer);

  zero(buffer);
  stringify(16, buffer);
  printf("%s\n", buffer);

  zero(buffer);
  stringify(255, buffer);
  printf("%s\n", buffer);
  // doThings();
}
