#include <stdio.h>
int fun_sum(int n);
int main()
{	int n;
	int sum;
	scanf("%d",&n);
	sum = fun_sum(n);
	printf("%d",sum);
	return 0;
}

int fun_sum(int n)
{	int sum;
	sum=(n+1)*n/2;
	return (sum);
}
