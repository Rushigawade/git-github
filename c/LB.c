//no=7521 print the reverse order
//output=1257

#include <stdio.h>

//int Display(int ivalue);
void Display();

int main()
{
    // int ivalue=0,iret=0;
    // printf("Enter no\n");
	// scanf("%d"&ivalue);

 //iret=Display(ivalue);
 //printf('%d'iret);

	   Display();
	return 0;
}

void Display()
{
	int ino=7521;
	int idigit=0;

	idigit=ino%10;
	printf("%d\n",idigit);
	ino=ino/10;
    


idigit=ino%10;
printf("%d\n",idigit);
ino=ino/10;

idigit=ino%10;
printf("%d\n",idigit);
ino=ino/10;

idigit=ino%10;
printf("%d\n",idigit);
ino=ino/10;

}






