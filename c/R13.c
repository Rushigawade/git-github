#include <stdio.h>

void printevenfactor(int ino)
{
 int icnt=0;
 
 for (icnt=1;icnt<ino;icnt++ )
	{
		if (ino%icnt==0 && icnt%2==0)
		{
			printf("%d factor is\n", icnt);
			break;
		}
	     else if(ino%icnt==1 && icnt%2==1)
		{
			
            printf("%d odd factor\n",icnt);
			break;
		}
		else if(ino%icnt==3 && icnt%2==3)
        {
			printf("%d odd factor\n",icnt);
			break;
		}
     else
		{
		 printf("%d not factor\n",icnt); 
		 break;
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
