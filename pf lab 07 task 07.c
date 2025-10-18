#include <stdio.h>
int main()
{
  char text[100];
  int i;
  int j=0;
  int sum=0;
  int digits[100];
  printf("Enter\n");
  scanf("%s",&text);
  
  for(i=0; text[i]!= '\0';i++)
  {
  	if(text[i]>='0' && text[i]<='9')
  	{
  	 digits[j]=text[i] -'0';
	 sum = sum + digits[j];
	 j++;	
	}
  }
   printf("Extracted digits\n");
   for(i=0;i<j;i++)
   {
   	printf("%d\n",digits[i]);
   }
   printf("The sum of the digits is \n %d",sum);
 	
	
	return 0;
}
