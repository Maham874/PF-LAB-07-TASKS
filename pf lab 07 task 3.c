#include <stdio.h>

int main() {
    int age[8];
	 int i;
	 int youngest;

    for(i = 0; i < 8; i++)
	{
        printf("Enter your age: ");
        scanf("%d", &age[i]);
    }

 
    youngest = age[0];

    for(i = 1; i < 8; i++)
	{
        if(age[i] < youngest)
		{
            youngest = age[i];
        }
    }

    printf("The youngest age is: %d\n", youngest);

    return 0;
}
