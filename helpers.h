
#define QUOTE(x) x

// Simple macro to print out a line of code and its result
// Prints as a long long hex number (64 bits on aarch64 and amd64)
#define lineprint(x) printf(QUOTE(#x)); printf(" ==> %llx\n", x)
