#include <stdio.h>

int Addition(int iNo1,int iNo2	)
	{
		int iresult=0;

		iresult=iNo1+iNo2;
		return iresult;
	}




 int main()
 {
	 int ia=0,ib=0,iret=0;
	 
	 printf("enter the first no\n");
	 scanf("%d",&ia);
    
	 printf("enter the second no\n");
	 scanf("%d",&ib);


	 iret=Addition(ia ,ib);

	 printf("Addition is :%d\n",iret);


	
	return 0;
 }
