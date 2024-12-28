#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; // Assuming a word won't exceed 100 characters
    char letters[100]; // Array to store each letter

    printf("Enter a word: ");
    scanf("%s", word);

    int word_length = strlen(word);
    
    if (word_length > 100) {
        printf("Word is too long to store.\n");
        return 1;
    }

    for (int i = 0; i < word_length; i++) {
        letters[i] = word[i];
    }

    printf("Letters stored in the array: ");
    for (int i = 0; i < word_length; i++) {
        printf("%c ", letters[i]);
    }
    printf("\n");

    return 0;
}
