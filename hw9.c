#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100]; 
    printf("Input> ");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0'; 

    
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') { 
            input[i] = input[i] + 32; 
        }
        else if (input[i] >= 'a' && input[i] <= 'z') { 
            input[i] = input[i] - 32; 
        }
    }

    printf("Output> %s\n", input);
    return 0;
}