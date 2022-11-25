//Pointer and Array

void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]:",i+1);
		scanf("%d",(a+i));
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]=%d",i+1,*(a+i));
	}
	getch();
}