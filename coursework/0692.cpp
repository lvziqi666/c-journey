# include <stdio.h>
int main()
{
	float a[8];
	float b;
	int i;
	for(i=0;i<=7;i++){
		scanf("%f",&b);
		a[i]=b;
	}
	float d;
	d=a[0];
	int m;
for(m=0;m<=7;m++){
	

	for(i=0;i<7;i++){
		if(a[i]<a[i+1]){
			d=a[i];
			a[i]=a[i+1];
			a[i+1]=d;
		}
	}
}
	for(i=0;i<=7;i++){
		printf("%.1f ",a[i]);
	}
	return 0;
}
