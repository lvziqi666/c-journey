# include <stdio.h>
int main()
{
	char str[100];
	gets(str);
	int maxn,minn;
	int a[26]={0};
	
	for(int i=0;str[i]!='\0';i++){
		a[str[i]-97]++;
	}
	maxn=0;
	minn=1000;
	for(int i=0;i<26;i++){
		if(a[i]>0){
		
		if(a[i]>maxn){
			maxn=a[i];
		}
		if(a[i]<minn){
			minn=a[i];
		}
	}
	}
	int cha;

	cha=maxn-minn;

	if(cha==0||cha==1){
		printf("No Answer");
			printf("\n");
		printf("0");
	}
	else if(cha==2){
		printf("Lucky Word\2\n");
	}
	else
	for(int i=2;i<cha;i++){
		if(cha%i==0){
			printf("No Answer");
				printf("\n");
			printf("0");
			break;
		}
		else if(cha==i+1){
			printf("Lucky Word");
		}
			printf("\n");
		printf("%d",cha);
	}

	return 0;
}
