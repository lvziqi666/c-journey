# include <stdio.h>
int main()
{
	int a[6];
	int i;
	int b;
	float total;
	for(i=0;i<=5;i++){
		scanf("%d",&b);
		a[i]=b;
	total+=a[i];
	}
	printf("%.2f",total/6);
	return 0;
}
