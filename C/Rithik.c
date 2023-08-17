#include <stdio.h>
void main() {
    int numbers[4];
    char letters[4];
    printf("Enter the Digits: ");
    for (int i = 0; i < 4; i++){
        scanf("%d", &numbers[i]);
        letters[i] = (char)numbers[i];
        printf("%d-%c\n", numbers[i], letters[i]);
    }        
}