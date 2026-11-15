# include <stdio.h>
int divide(int c,int d,int *result);
int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d",&a,&b);
	divide(a,b,&c);
	if(divide(a,b,&c)){
		printf("%d/%d=%d",a,b,c);
	}
	return 0;
}
int divide(int c,int d,int *result)
{
	if(d==0){
		return 0;
	}
	else {
		*result=c/d;
	}
	return 1;
}
