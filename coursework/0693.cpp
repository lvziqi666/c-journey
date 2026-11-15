# include <stdio.h>
int main()
{
	int a[5];
	int i;
	i=0;
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	int b;
	b=a[4];
	for(i=4;i>=1;i--){
		a[i]=a[i-1];
	}
	a[0]=b;
	for(i=0;i<=4;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
