# include <stdio.h>
int main()
{
	int a,b,d;
	int min;
	scanf("%d%d",&a,&b);
	if(a<b){
		min=a;
	}
	else min=b;
	for(int c=1;c<=min;c++){
		if(a%c==0){
			if(b%c==0){
				d=c;
		}
	}
	}
	printf("%d",d);
	return 0;
}
