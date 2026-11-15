# include <stdio.h>
int main()
{
	int m,n;
	int a,b;
	int max,min;
	int x,y;
	scanf("%d%d",&m,&n);
	max=(m>n)?m:n;
	min=(m<n)?m:n;
	for(a=1;a<=min;a++){
		if(m%a==0&&n%a==0){
			x=a;
		}
	}
for(b=max;;b++){
	if(b%m==0&&b%n==0){
		y=b;
		break;
	}
	
	}
	printf("%d %d",x,y);
	
}
