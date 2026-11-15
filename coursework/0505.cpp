# include <stdio.h>
int main()
{
	int a,n;
	int s;
	scanf("%d%d",&a,&n);
	int b;
	int c;
	c=a;
	s=a;
	for(b=1;b<n;b++){
		c=c*10+a;
		s+=c;
	}
	printf("%d",s);
	return 0;
}
