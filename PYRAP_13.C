/* 1
   2 1
   3 2 1
   4 3 2 1*/

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
		    printf("%5d",j);
		}
		printf("\n");
	}
	getch();
}