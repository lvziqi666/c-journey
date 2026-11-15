# include <stdio.h>
void x(int a);
int main()
{
	int n;
	scanf("%d",&n);
	x(n);
	return 0;
}
void x(int a){
	int c1,c2,c3,c4;
	c1=a%10;
	a/=10;
	c2=a%10;
	a/=10;
	c3=a%10;
	a/=10;
	c4=a%10;
	a/=10;
	printf("%d %d %d %d",c4,c3,c2,c1);
}
