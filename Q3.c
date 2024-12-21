#include<stdio.h>

int main ()
{
    int n, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the number:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
 
     for (int i = 0; i < n; i++)
    {
        if (array[i] > 0) 
        {
            sum += array[i];
        }
    }
     printf("Sum of all positive values in the array: %d\n", sum);

     return 0;
}