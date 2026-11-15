# include <stdio.h>
int main()
{
	int a[20][20];
	for(int m=0;m<20;m++){
		for(int n=0;n<20;n++){
			a[m][n]=0;
		}
	}
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		a[i][0]=1;
	}
	for(int m=1;m<20;m++){
		for(int n=1;n<20;n++){
			
		a[m][n]=a[m-1][n]+a[m-1][n-1];
		}
	}
	for(int m=0;m<k;m++){
		for(int n=0;n<=m;n++){
			printf("%d ",a[m][n]);
		}
		printf("\n");
	}
	return 0;
}
