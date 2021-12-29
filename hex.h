#include <stdio.h>
#include <string.h>

const char* hexenc(const char* text) {
    int len = strlen(text);
    char* hex, string[50];
    hex = malloc(100);

    for (int i = 0, j = 0; i < len; ++i, j += 2)
        sprintf(hex + j, "%02x", text[i] & 0xff);

    return hex;
}

const char* hexdec(const char* text) {
    int len = strlen(text);
    char hex[100], *string;
    string = malloc(50);

    len = strlen(text);
    for (int i = 0, j = 0; j < len; ++i, j += 2) {
        int val[1];
        sscanf(text + j, "%2x", val);
        string[i] = val[0];
        string[i + 1] = '\0';
  }

    return string;
}
