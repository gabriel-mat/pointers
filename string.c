#include <stdio.h>

#define MAX_SIZE 20

void strcopy(char *source, char *dest);

int main()
{
    char string_A[MAX_SIZE + 1], string_B[MAX_SIZE + 1];

    printf("Source string: ");
    scanf(" %20[^\n]", string_A);

    printf("Dest string: ");
    scanf(" %20[^\n]", string_B);

    strcopy(string_A, string_B);

    printf("Uploaded (dest) string: %s\n", string_B);

    return 0;
}

void strcopy(char *source, char *dest)
{
    int pos = 0;

    while (*(source + pos) != '\0')
    {
        *(dest + pos) = *(source + pos);
        pos++;
    }
}