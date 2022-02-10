#include <stdio.h>
 void Displayfactors(int);
int main()
{
	int iNo=0;
	printf("Enter no\n");
	scanf("%d",&iNo);

	Displayfactors(iNo);
	
	return 0;
}
 void Displayfactors(int ivalue)
 {
	int icnt=0;
	if (ivalue<0)   //updator 
	{
		ivalue=-ivalue;
    }
	for ( icnt=1;icnt<ivalue;icnt++)
	{
		if (ivalue % icnt==0)
		{
			printf("%d\n",icnt);
		}
	}
 
}