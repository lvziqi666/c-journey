# include <stdio.h>
int main()
{
	int a[20][20];
	a[0][0]=1;
	int i;
	int b;
	for(i=0;i<20;i++){
		for(b=0;b<20;b++){
		a[i][b]=0;	
		}
		
	}
	for(i=0;i<20;i++){
		a[i][0]=1;
	}
	int x;
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		for(b=1;b<20;b++){
			a[i][b]=a[i-1][b-1]+a[i-1][b];
		}
	}
	for(i=0;i<x;i++){
		for(b=0;b<=i;b++){
			printf("%4d",a[i][b]);
			if(b==i){
				printf("\n");
			}
		}
		
	}
	return 0;
}
