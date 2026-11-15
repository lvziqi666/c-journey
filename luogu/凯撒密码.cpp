# include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char str[50];
	gets(str);
	
	for(int i=0;str[i]!='\0';i++){
	if(str[i]+n>122){
		str[i]=str[i]-26+n;
	}
		else str[i]+=n;
	}
	for(int i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	}
	return 0;
}
//如果要吸收空格键，可以做一个getchar（）
