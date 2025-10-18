#include <stdio.h>

int main() {
    int arr[10];
    int i;  
    int sorted = 1;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++) 
	{
        if (arr[i] > arr[i + 1]) 
		{
            sorted = 0;
            break;
        }
    }

    if (sorted == 1)
	{
        printf("The array is sorted in ascending order.\n");
    }
    else
    {
        printf("The array is NOT sorted in ascending order.\n");
    }
    return 0;
}
