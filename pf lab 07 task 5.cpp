#include <stdio.h>

int main() {
    int arr[12];
    int i, j;
	int numToRemove;
	int size = 12;

    printf("Enter 12 numbers:\n");
    for(i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to remove: ");
    scanf("%d", &numToRemove);

    for(i = 0; i < size; i++) 
	{
        if(arr[i] == numToRemove) 
		{
            for(j = i; j < size - 1; j++) 
			{
                arr[j] = arr[j + 1];
            }
            size--;  
            i--;    
        }
    }
    
    printf("\nArray after removing %d:\n", numToRemove);
    for(i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}
