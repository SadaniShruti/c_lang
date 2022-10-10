//smallest no:

void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter 5 nos.");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a<b && a<c && a<d && a<e)
		printf("%d is smallest",a);
	else if(b<a && b<c && b<d && b<e)
		printf("%d is smallest",b);
	else if(c<a && c<b && c<d && c<e)
		printf("%d is smallest",c);
	else if(d<a && d<b && d<c && d<e)
		printf("%d is smallest",d);
	else if(e<a && e<b && e<c && e<d)
		printf("%d is smallest",e);
	getch();
}