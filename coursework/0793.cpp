# include <stdio.h>
int total(int b,int n);
int main()
{
	int x;
	int b;
	scanf("%d%d",&b,&x);
	int s;
	s=total(b,x);
	printf("%d",s);
	return 0;
}
int total(int m,int n)
{
	int i;
	int sum=0;
	int c;
	c=m;
	for(i=1;i<=n;i++){
		sum+=m;
		m=m*10+c;
	}
	return sum;
}
