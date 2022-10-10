/* #
   @  #
   #  @  #
   @  #  @  #
   ......N lines
*/
void main()
{
	int n,i,j,sp=-1;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
		    if(j%2==0)
		       printf("  @");
		    else
		       printf("  #");
		}
		printf("\n");
	}
	getch();
}