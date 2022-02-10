#include <stdio.h>


int Display(int iNo)
{

int i=0;
 
 for (i=1;i<=5;i++)
 {

	 printf("#\n");
 }
}


int main()
{
	int iNo=0;
	
	printf("Enter number\n");

	scanf("%d",&iNo);


	Display(iNo);//function call
	
	return 0;

}
