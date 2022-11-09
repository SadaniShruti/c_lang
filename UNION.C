//Example of union
#include<stdio.h>
union Demo
{
	int a;
	float b;
	char c;
};
void main()
{
	union Demo d;
	clrscr();
	printf("Enter an int:");
	scanf("%d",&d.a);
	printf("\n =%d",d.a);
	printf("\n Enter a float:");
	scanf("\n %f",&d.b);
	printf("\n Enter a char:");
	fflush(stdin);
	scanf("%c",&d.c);
	printf("\n c=%c",d.c);
	printf("\n a=%d",d.a);
	printf("\n b=%f",d.b);
	getch();
}