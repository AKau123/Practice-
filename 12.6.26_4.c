#include <stdio.h>

int main() {

    unsigned int n;

    printf("Enter number:\n");
    scanf("%u", &n);

    unsigned int rev = 0;

    for(int i = 0; i < 32; i++) {

        rev = rev << 1;

        rev = rev | (n & 1);

        n = n >> 1;
    }

    printf("Reversed Bit Value = %u\n", rev);

    return 0;
}
