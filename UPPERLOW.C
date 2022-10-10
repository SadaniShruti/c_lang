//Input a character. WAP that check whether the char is upper case letter
//Lower case letter or digit or white space or symbols

void main()
{
	char c;
	clrscr();
	printf("Enter a character:");
	scanf("%c",&c);
	if (c>='A'&& c<='Z')
		printf("%c is Upper case letter",c);
	else if(c>='a'&&c<='z')
		printf("%c is lower case letter",c);
	else if (c>='0' && c<='9')
		printf("c is Digit",c);
	else if(c==' ')
		printf("%c is white space",c);
	else
		printf("%c is symbol",c);
	getch();
}