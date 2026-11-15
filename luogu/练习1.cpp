//斐波那契数列
# include <stdio.h>
int main()
{
	int a,b,c,d;
	a=1;
	b=1;
	printf("%d %d ",a,b);
	for(int i=1;i<=40;i++){
		c=a+b;
		d=b+c;
		a=c;
		b=d;
		if(c<=0||d<=0){
			break;
		}
		printf("%d %d ",c,d);
		
	}
	return 0;
}
