# include <stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);
		
	}
	int b;
	b=a[4];
	a[4]=a[0];
	a[0]=b;
	int d;
	d=a[1];
	a[1]=a[3];
	a[3]=d;
	for(i=0;i<=4;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
