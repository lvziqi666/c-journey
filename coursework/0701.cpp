#include <stdio.h>
int main()
{	int get_max_gbs(int m, int n);
	int get_max_gys(int m, int n);	
	
	int m, n, gys, gbs;
	scanf("%d%d",&m,&n);
	
	gys=get_max_gys(m,n);
	gbs=get_max_gbs(m,n);
	
	printf("%d %d\n",gbs, gys);
}
int get_max_gbs(int m, int n){
	int min;
	min=(m<n)?m:n;
	int i;
	int a;
	for(i=1;i<=min;i++){
		if(m%i==0&&n%i==0){
		a=i;	
		}
	}
	return a;
}
int get_max_gys(int m, int n){
	int max;
	max=(m>n)?m:n;
	int i;
	int a;
	for(i=max;;i++){
		if(i%m==0&&i%n==0){
		a=i;
			break;
		}
	}
	return a;
}
