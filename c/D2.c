//Accept one number from user and print that number of * on screen


#include <stdio.h>



void Display(int iNo)
{     

	int i=0;
	  while(iNo>2)
	{
		  printf("*");
		  iNo--;
	}
}











int main()
{
	int ivalue=0;

	printf("enter number");

	scanf("%d",&ivalue);

	Display(ivalue);
	return 0;
}