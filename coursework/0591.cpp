# include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int a,b;
	a=x;
	do{
	if(a%2==0){
		b+=a;
		
	}
	a++;
	}while(a>=x&&a<=y);
	printf("%d",b);
	return 0;
}
