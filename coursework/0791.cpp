#include <stdio.h>
double fun_fact(int n);
int main()
{	int x;
	int total;
	scanf("%d",&x);
	total=fun_fact(x);
	printf("%d",total);
	return 0;
	
}

double fun_fact(int n)
{	int i;
	double t = 1, sum = 0;
	for(i=1;i<=n;i++){
		t*=i;
		sum+=t;
	}
	
	
	return (sum);
}
