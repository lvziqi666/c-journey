# include <stdio.h>
int main()
{
	int a,b,c;
	float x,y,z;
	x=0;
	y=0;
	z=0;
	for(a=1;a<=100;a++){
		x+=a;
	}
	for(b=1;b<=50;b++){
		y=y+b*b;
	}
	for(c=1;c<=10;c++){
		z=z+1.0/c;
	}
	printf("%.2f",x+y+z);
	return 0;
}
