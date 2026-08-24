#include <stdio.h>


int main(void)
{
    int arr[] = {25, 451451, 45, 50, 1, 1, 1, 1, 1, 1, 1, 55, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 60, 65};

    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int max = 0;

    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            if (count > max)
                max = count;
        }
        else
            count = 0;
    }

    printf("Maximum consecutive ones: %i\n", max);
}