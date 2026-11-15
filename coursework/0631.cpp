# include <stdio.h>
int main()
{
	float a[10];
	int i;
	i=0;
	float max,min;
	int m,n;
	float b;
	for(i=0;i<=9;i++){
		scanf("%f",&b);
		a[i]=b;
	}
	max=a[0];
	min=a[0];
		for(i=0;i<=9;i++){
			if(a[i]>=max){
				max=a[i];
				m=i;
			}
			if(a[i]<=min){
				min=a[i];
				n=i;
			}
		}
	printf("%.1f %d %.1f %d",max,m,min,n);
	return 0;
	
}
