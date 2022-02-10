#include <stdio.h>

void printevenfactor(int ino)
{
 //int icnt=0;


	 for(int i=1;i<=ino;i++)
		{
		 if(ino%i==0 && i%2==0)
			{
			 printf("Even Factor=%d \n",i);
			}
		 else if(ino%i==0)
			{
			 printf("Odd Factor=%d \n",i);
			}
		}
		
	
 

}




int main()
{
	int ivalue=0;
	printf("enter no\n");
	scanf("%d",&ivalue);

	printevenfactor(ivalue);//function call
	
	return 0;
}
