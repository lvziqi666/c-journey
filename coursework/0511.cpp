# include <stdio.h>
# include <math.h>
int main()
{
	int n;
	float s;
	int cnt;
	float b;
	b=50.0;
	s=100.0;
	scanf("%d",&n);
	for(cnt=1;cnt<=n-1;cnt++){
	
		s=s+b*2;
	b/=2;	
	}
	printf("%.2f ",s);
printf("%.2f",b);
	return 0;
}
