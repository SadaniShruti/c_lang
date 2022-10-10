//2 D Array Example

void main()
{
	int a[2][3],i,j;
	clrscr();
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d]:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}