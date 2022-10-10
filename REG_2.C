#include<C:\\SHRUTI\\C_LANG\REG2.c>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter two nos:");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	d=sub(a,b);
	printf("\n %d+%d=%d",a,b,c);
	printf("\n %d-%d=%d",a,b,d);
	getch();
}