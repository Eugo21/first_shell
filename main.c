#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE 1024

int main(void) {
    char input[MAX_INPUT_SIZE];

    

    while (1) {
        printf("$:~ ");

        fflush(stdout);

        if (!fgets(input, MAX_INPUT_SIZE, stdin)) {
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strlen(input) == 0) {
            continue;
        }
    }
    return 0;
}