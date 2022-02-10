#include <stdio.h>


int Addition(ivalue)
{
	int isum=0;
	int icnt=0;
for (icnt=1;icnt=ivalue ;icnt++ )
{
	isum=isum+icnt;
}

return 0;

}









int main()
{
	int iNo=0;
	int iRet=0;
	printf("enter no \n ");
	scanf("%d \n",&iNo);

	iRet=Addition(iNo);
	printf("Addition is:%d\n",iRet);

   return 0;
}
