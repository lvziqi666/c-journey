# include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int *p1,*p2,*p3;
	int min,max;
	min=(a<b)?a:b;
	max=(a>b)?a:b;
	int x,y,z;
	if(c<min){
	x=c;
		y=min;
		z=max;
	}
	else if(c>max){
		x=min;
		y=max;
		z=c;
	}
	else{
		x=min;
		y=c;
		z=max;
		
	}
	p1=&x;
	p2=&y;
	p3=&z;
	printf("%d %d %d",*p1,*p2,*p3);
	return 0;
}
