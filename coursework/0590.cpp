# include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a,b;
	b=0;
	for(a=m;a<=n;a++){
		b+=a;
	}
	printf("%d",b);
	return 0;
	
}
