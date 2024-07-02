#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool belongsToCFG(char* str) {
    int len = strlen(str);
    int i = 0;
    if (len < 4 || str[0] != '1' || str[len - 1] != '1') 
    {return false;}
    for (i = 1; i < len - 1; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return false;
        }
    }

    return true;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    if (belongsToCFG(input)) {
        printf("The string belongs to the CFG language.\n");
    } else {
        printf("The string does not belong to the CFG language.\n");
    }

    return 0;
}

