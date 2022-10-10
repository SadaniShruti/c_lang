/* 1 2 3 4
     2 3 4
       3 4
	 4 */

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	       printf("   ");
	    for(j=i;j<=n;j++)
	       printf("%3d",j);
	    printf("\n");
	}
	getch();
}