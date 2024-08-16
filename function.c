#include <stdio.h>

typedef struct list
{
    int value;
    struct list *next;
} list;

list *find_value(list *list_pointer, int value);

int main()
{
    list a, b, c;
    int search;

    printf("\nSearch for: ");
    scanf("%d", &search);

    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    if (find_value(&a, search) == NULL)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Value found!\n");
    }

    return 0;
}

list *find_value(list *list_pointer, int value)
{
    list *ligature;

    ligature = list_pointer;

    while (ligature != NULL)
    {
        if (ligature->value == value)
        {
            return (ligature);
        }

        ligature = ligature->next;
    }

    return NULL;
}