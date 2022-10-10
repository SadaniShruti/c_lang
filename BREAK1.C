//break loop example

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
	     if(i%5==0)
		 break;
	     printf("\n i=%d",i);
	}
	getch();
}