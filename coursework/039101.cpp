# include <stdio.h>
int main()
{
	float x,y,total;
	int a;
	x=2.5;
	a=7;
	y=4.7;
	total=x+a%3*(int)(x+y)%2/4.0;
	printf("%.2f",total);
	return 0;
}
