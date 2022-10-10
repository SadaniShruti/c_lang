//Example of command line Argument

void main (int argc,char*argv[])
{
	int sum=0,i,n;
	for (i=1;i<argc;i++)
	{
		n=atoi(argv[i]);
		printf("\n %d",n);
		sum+=n;
	}
	printf("\n sum=%d",sum);
	getch();
}