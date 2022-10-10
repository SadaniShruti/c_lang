//Input line of text
void main()
{
	char s[100],c;
	int i=0;
	clrscr();
	printf("Enter line of text\n");
	while((c=getchar())!='\n')
	{
		s[i]=c;
		i++;
	}
	s[i]='\0';
	printf("\n s=%s",s);
	getch();
}