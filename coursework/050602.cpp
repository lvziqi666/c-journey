# include <stdio.h>
int main()
{
	double sum;
	int a;
	double c;
	c=1;
	for(a=1;a<=20;a++){
		c*=a;
		sum+=c;
	}
	printf("%e\n",sum);
		return 0;
}
