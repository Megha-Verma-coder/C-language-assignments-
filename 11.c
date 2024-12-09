/*WAP to implement Insert -Front, any position in between & end in an array. Print
the array before insert & after insert.*/

#include <stdio.h>

int main()
{
    int arr[5], input;

    printf("First input 5 elements for array : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Press 0 to insert at the starting, 5 for end and any other index if you want :");
    scanf("%d", &input);
    if (input == 0)

    {   
        for (int i = 0; i < 5; i++) 
        {
            scanf("%d", &arr[0]);
        }
    }
    if (input == 5)
    {
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &arr[5]);
        }
    }
    else
    {
        {
            for (int i = 0; i < 5; i++)
            {
                scanf("%d", &arr[input]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}