#include<stdio.h>
int main ()
{
	int arr[10];
	int i;
	int sum = 0;
	
	printf("Enter 10 integers (profit/loss) :\n");
	for(i=0 ; i<10 ; i++)
	{
	     scanf("%d" ,&arr[i]);
	}
	for (i=0 ; i<10 ; i++)
	{
		if(arr[i] > 0)
		{
			sum = sum + arr[i]; 
		}
	}
	
	
	printf("\n The total profit (Sum of Positive Values)is:%d\n" ,sum);
}