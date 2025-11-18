#include <stdio.h>

int main()
{
    int array[100], n, temp, flag;
    printf("enter number of elements:");
    scanf("%d", &n);

    printf("enter numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            flag = 0;
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }}
            if (flag == 0)
            {
                break;
            }
        }
        
        printf("after bubble sort array is: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", array[i]);
        }
        return 0;
    }
