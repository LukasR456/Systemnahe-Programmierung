#include <iostream>

void stringcopy(const char* source, char* destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main()
{
    char gruss[] = "Hallo";
    char copy[10];
    stringcopy(gruss, copy);
    printf(copy);
    return 0;
}