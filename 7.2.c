#include <stdio.h>

#define FILENAME "output_data.txt"

int main() {
    FILE *fptr;
    char text[100];
    int number;

    fptr = fopen(FILENAME, "r");
    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for reading.\n", FILENAME);
        return 1;
    }

    fgets(text, sizeof(text), fptr);
    fscanf(fptr, "%d", &number);

    fclose(fptr);

    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILENAME);
    printf("File reading complete.\n");
    printf("\n--- FILE CONTENT REPORT ---\n");
    printf("Text: %s", text);
    printf("Number: %d\n", number);

    return 0;
}
