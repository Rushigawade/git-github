// 3..accept on number from user if number is less than 10 then print "hello" otherwise print "Demo"


#include <stdio.h>

void Display(int iNo)
{
	 if (iNo<10)
	 {
		 printf("hello");
	 }
     else
	{


		 printf("Demo");

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
