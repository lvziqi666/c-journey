# include <stdio.h>
int main()
{
		char a1[10000];
	int i=0;
	char ch;
	while((ch=getchar())!='\n'&&ch!=EOF){
		a1[i]=ch;
		i++;
	}
		a1[i]='\0';
		char a2[10000];
	int n=0;
	char ch2;
	while((ch2=getchar())!='\n'&&ch2!=EOF){
		a2[n]=ch2;
		n++;
	}
	a2[n]='\0';
		int c=0;
	for(c=0;c<n;c++){
		a1[c]=a2[c];
	}
		for(int m=0;m<n;m++){
			printf("%c",a1[m]);
		}
}
