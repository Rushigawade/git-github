#include <stdio.h>


unsigned long Factorial(int ivalue)
{
	unsigned long isum=1;
	int icnt=0;


if (ivalue<0)   //updator used #Negative value convert in to positive
{
	ivalue=-ivalue;
}
for (icnt=1;icnt<=ivalue ;icnt++ )
{
	isum=isum*icnt;
}

return isum;

}




 unsigned long main()
{
	 int iNo=0;
	unsigned long iRet=0;
	printf("enter no \n ");
	scanf("%u",&iNo);

	iRet=Factorial(iNo);  //Function call
	printf("Facorial is:%d\n",iRet);

   return 0;
}
