#include <stdio.h>

void convertcase(char cchar)
{
	//char a='a';
	//char B='B';
	if (cchar=='A' && 'A'>='z')
	{
		printf("%c",+32);
		
	}
   // else if (cValue && B==32)
   // {
     //  printf("%c",B);
   // }

}








int main()
{
	char cValue='\0';
	printf("enter character\n");
	scanf("%c",& cValue);
	convertcase(cValue);    //function call
	return 0;

}
