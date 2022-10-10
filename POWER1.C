//To find value of x^y=>Multiply x,y times.
long int power(int,int);
void main()
{
	int x,y;
	long int p;
	clrscr();
	printf("Enter base & power:");
	scanf("%d %d",&x,&y);
	p=power(x,y);
	printf("\n %d^%d=%ld",x,y,p);
	getch();
}
long int power(int x,int y)
{
	long int p=1;
	int i;
	for(i=1;i<=y;i++)
		p=p*x;
	return(p);
}