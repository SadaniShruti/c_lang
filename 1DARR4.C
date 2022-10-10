//Input 10 value in an array WAP that print values without dublication.(that print only unique values.

void main()
{
	int a[10],i,c,j;
	clrscr();
	for(i=0;i<10;i++)
	{
	     printf("Enter a[%d]:",i+1);
	     scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		c=0;
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c==0)
			printf("\n %d",a[i]);
	}
	getch();
}