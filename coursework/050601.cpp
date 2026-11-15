# include <stdio.h>
int main()
{
	double sum;
	int a,b;
	double c;
	
	for(a=1;a<=20;a++){
		for(b=1;b<=a;b++){
			c*=b;
		}
		sum+=c;
		c=1;
	}
	printf("%e\n",sum);
	return 0;
}
