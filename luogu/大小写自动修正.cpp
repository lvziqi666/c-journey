# include <stdio.h>
int main()
{
	char str[100];
	gets(str);
	for(int i=0;i<100;i++){
		if(str[i]>=97&&str[i]<=122){
			str[i]=str[i]-32;
		}
	}
	for(int i=0;i<100;i++){
		if(str[i]!='\0'){
			printf("%c",str[i]);
		}
		else break;
	}
	return 0;
}
