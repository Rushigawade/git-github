// Given no is even or not


#include <stdio.h>
#include <stdbool.h>


bool check Even(int);
int main()
{
    int ino=0;
    bool bret=false;

    printf("Enter no\n");
	scanf("%d",&ino);

    bret=check Even(ino);                       //function calling
	if (bret==true)
    {
		printf("%d is even no\n",ino);
	}
else
	{

	printf("%d is not even\n",ino);
	}
	return 0;
}


bool check Even(int ivalue)                   //........
{
	if ((ivalue % 2)==0)
	{
		return true;
	}
else
	{
	 return false;

	}
}