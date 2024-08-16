#include <stdio.h>

void sum_array(int array[], int num_elements);
void show_array(int array[], int num_elements);

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int *pArr = array; // int *pArr = &array[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *pArr);
        pArr++;
    }

    sum_array(array, 5);

    pArr = array;

    *(pArr + 1) = 1;
    *(pArr + 2) = 2;
    *(pArr + 3) = 3;
    *(pArr + 4) = 5;

    show_array(array, 5);

    return 0;
}

void sum_array(int array[], int num_elements)
{
    int sum = 0;
    int *pointer = array, *end_array = array + num_elements - 1;

    while (pointer <= end_array)
    {
        sum += *pointer;
        pointer++;
    }

    printf("\nS: %d\n", sum);
}

void show_array(int array[], int num_elements)
{
    int *pointer = array;
    int *end_array = array + num_elements - 1;

    while (pointer <= end_array)
    {
        printf("%02d ", *pointer);
        pointer++;
    }
}