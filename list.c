#include <stdio.h>

typedef struct list
{
    int value;
    struct list *next;
} list;

int main()
{
    list a1, b2, c3;
    list *ligature = &a1;

    a1.value = 1;
    b2.value = 2;
    c3.value = 3;

    a1.next = &b2;
    b2.next = &c3;
    c3.next = NULL;

    while (ligature != NULL)
    {
        printf("Value: %d\n", (*ligature).value); // ligature->value
        ligature = (*ligature).next;              // ligature->next
    }

    return 0;
}