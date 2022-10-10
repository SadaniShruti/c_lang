/* fibonaci series
   0
   1 1
   2 3 5
   8 13 21 34 */

void main()
{
	int n,i,j,a=-1,b=1,s;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	       s=a+b;
	       printf("%5d",s);
	       a=b;
	       b=s;
	   }
	   {
	       printf("\n");
	   }

	}
	getch();
}
