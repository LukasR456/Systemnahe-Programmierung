#include <iostream>

int stringlength(char* buffer) {
    if (buffer == NULL) {
        return -1;
    }
    int i = 0;
    while (buffer[i] != '\0') {
        i++;
        buffer;
    }
    return i;
}

int main()
{
    char gruss[] = "Hallo";
    printf("Lenght of string %d \n", stringlength(gruss));
}
