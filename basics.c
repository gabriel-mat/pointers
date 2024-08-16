#include <stdio.h>

void change_value(int *P);
void no_change(int value);

int main()
{
    int value;
    int *pointer = &value;

    value = 10;

    printf("Value: %d\n", value);
    no_change(value);
    printf("Value: %d\n", value);
    change_value(pointer);
    printf("Value: %d\n", value);

    return 0;
}

void change_value(int *P)
{
    *P += 90;
    printf("Change value: %d\n", *P);
}

void no_change(int value)
{
    value += 90;
    printf("No change: %d\n", value);
}