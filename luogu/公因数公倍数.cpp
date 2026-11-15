# include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int min,max;
	min=(m<n)?m:n;
	max=(m>n)?m:n;
	int x,y;
	for(int i=1;i<=min;i++){
		if(m%i==0&&n%i==0){
			x=i;
		}
	}
	for(int i=max;i<=m*n;i++){
		if(i%m==0&&i%n==0){
			y=i;
			break;
		}
	}
	printf("%d %d",x,y);
	return 0;
}
