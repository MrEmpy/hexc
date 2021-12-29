#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hex.h"

void example1() {
    char str[] = "test";
    printf("Hex Encoded: %s", hexenc(str));
}

void example2() {
    char str[] = "74657374";
    printf("Hex Decoded: %s", hexdec(str));
}

void example3() {
    char string_plain[] = "test";
    const char* string_enc = hexenc(string_plain);
    printf("Hex Encoded: %s\n", string_enc);
    printf("Hex Decoded: %s", hexdec(string_enc));
}

int main() {
    char choose[10];
    char choose_1[] = "1";
    printf(R"EOF(
[1] 1º Example
[2] 2º Example
[3] 3º Example

)EOF");
    printf("Choose an example: ");
    scanf("%10s", choose);

    if (strncmp(choose, "1", strlen(choose)) == 0) {
        printf("\n");
        example1();
    }

    else if (strncmp(choose, "2", strlen(choose)) == 0) {
        printf("\n");
        example2();
    }

    else if (strncmp(choose, "3", strlen(choose)) == 0) {
        printf("\n");
        example3();
    } else {
        printf("\nWrong choose.");
    }
}