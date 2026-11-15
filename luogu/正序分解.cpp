# include <stdio.h>
int main()
{
	int a;
	int b,c,d;
	scanf("%d",&a);
	while(a>0){
		b=a%10;
		c=c*10+b;
		a/=10;
	}
	while(c>0){
		d=c%10;
		printf("%d",d);
		if(c>10){
			printf(" ");
		}
		c/=10;
		
	}
	
	return 0;
	
}
