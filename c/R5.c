//Write a program which accepts one number from user and print that number of even numbers on screen
// Input:7
//outpt:2 4 6 8 10 12 14



#include <stdio.h>

void printEven(int ino)
{
	 int icnt=0;
     int isum=0;
	 if (ino <= 0)
	 {
        return;
	 }

	  for (icnt=1; icnt<=ino;icnt++ )
        {
		  isum=2*icnt; 
		  printf("%d ",isum);
		  
        }

}






int main()
{

	int ivalue=0;
	printf("Enter no\n");
	scanf("%d",&ivalue);
	printEven(ivalue);//function call
	 return 0;
}
