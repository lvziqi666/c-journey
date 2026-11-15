# include <stdio.h>
int main()
{
	float r,h,yzc,ymj,qmj,qtj,yztj;
	float pi=3.1415927;
	scanf("%f",&r);
	scanf("%f",&h);
	yzc=2*pi*r;
	ymj=pi*r*r;
	qmj=4*pi*r*r;
	qtj=4.0/3*r*r*r*pi;
	yztj=pi*r*r*h;
	printf("圆周长=%.2f\n",yzc);
	printf("圆面积=%.2f\n",ymj);
	printf("圆球表面积=%.2f\n",qmj);
	printf("圆球体积=%.2f\n",qtj);
	printf("圆柱体积=%.2f\n",yztj);
	return 0;
}
