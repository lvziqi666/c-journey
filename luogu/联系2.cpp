# include <stdio.h>
# include <string.h>
int main()
{
	int i=0;
	
	char *s="Hello World!";
//	s[0]='B';
	char *s2="Hello World!";
	char s3[]="Hello World!";
	s3[0]='B';
	printf("&i=%p\n",&i); 
	printf("s=%p\n",s);
	
	printf("s2=%p\n",s2);
	printf("s3[]=%p\n",s3);
	printf("Here!s[0]=%c\n",s[0]);
	printf("Here!s3[0]=%c\n",s3[0]);
	return 0;
}
//字符串实验
