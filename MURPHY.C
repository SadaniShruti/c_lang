///Input an int no. WAP that check whether the no. is murphy or not.

#include<math.h>

void main()
{
	int n,p,s,m,c=0;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	m=n;

	while(n>0)
	{
	     c++;
	     n=n/10;
	}
	s=m*m;
	p=pow(10,c);
	n=s%p;

	if(m==n)
	     printf("\n %d is Murphy",m);
	else
	     printf("\n %d is Not Murphy",m);
	getch();
}