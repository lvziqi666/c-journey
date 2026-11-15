# include <stdio.h>
int main()
{
	float a,b;
	int c;
	float sum;
	a=2;
	b=1;
	sum=0;
	for(c=1;c<=20;c++){
		sum+=a/b;
		float t=a;
		a=a+b;
		b=t;
		
	}
	printf("%.4f",sum);
	return 0;
}
