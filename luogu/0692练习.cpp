# include <stdio.h>
int main()
{
	float a[8];
	for(int i=0;i<8;i++){
		scanf("%f",&a[i]);
	}
	float change=0;
	for(int c=1;c<=7;c++){
	for(int i=0;i<7;i++){
		if(a[i]<a[i+1]){
			change=a[i];
			a[i]=a[i+1];
			a[i+1]=change;
		}
	}
	}
	if(a[6]<a[7]){
		change=a[6];
		a[6]=a[7];
		a[7]=change;
	}
	for(int i=0;i<8;i++){
		printf("%.1f ",a[i]);
	}
	return 0;
}
