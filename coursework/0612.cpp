# include <stdio.h>
int main()
{
	char a[10000];
		int i=0;
	char ch;
	while((ch=getchar())!='\n'&&ch!=EOF){
		a[i]=ch;
		i++;
	}
	a[i]='\0';
	char o[10000];
	for(int n=0;n<i;n++){
		o[n]=a[n];
	}
	for(int m=0;m<i;m++){
		if(a[m]>=65&&a[m]<=90){
			a[m]=155-a[m];
			
		}
		if(a[m]>=97&&a[m]<=122){
			a[m]=219-a[m];
			
		}
	}
		for(int m=0;m<i;m++){
		printf("%c",o[m]);
			}
	printf("\n");
	for(int m=0;m<i;m++){
		printf("%c",a[m]);
	}
	}
