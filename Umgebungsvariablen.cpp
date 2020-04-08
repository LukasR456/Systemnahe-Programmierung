#include <iostream>

int main(int argc, char ** argv, char **env)
{
    int i = 0;
    while (env[i] != nullptr) {
        printf(env[i]);
        printf("\n");
        i++;
    }
    return 0;
}

