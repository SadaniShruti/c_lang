// String operations
#include<string.h>

void main()
{
	char s1[20],s2[20],s3[20];
	int l1,l2,l3;
	clrscr();
	printf("Enter two strings:");
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	printf("\n length of %s is %d",s1,l1);
	strcpy(s3,s2);
	printf("\n s3=%s",s1);
	printf("\n s3=%s",s2);
	printf("\n s3=%s",s3);
	strcat(s1,s2);
	printf("\n Now s1=%s",s1);
	printf("\n strcmp(s1,s2)=%d",strcmp(s1,s2));
	printf("\n Upper case=%s",strupr(s1));
	printf("\n Lower case=%s",strlwr(s1));
	printf("\n Reverse=%s",strrev(s1));
	getch();
}