#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE 1024

int main(void) {
    char input[MAX_INPUT_SIZE];

    

    while (1) {
        printf("$:~ "); //print the prompt
        fflush(stdout); // Ensure the prompt is printed before waiting for input

        if (!fgets(input, MAX_INPUT_SIZE, stdin)) // Check for EOF or error
            break;

        input[strcspn(input, "\n")] = '\0';  // Remove the newline character

        if (strlen(input) == 0) // If the user just pressed Enter, prompt again
            continue;
    }
    return 0;
}