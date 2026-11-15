# include <stdio.h>
int main()
{
	int a[3][3];
	int i;
	int b;
	for(i=0;i<3;i++){
		for(b=0;b<3;b++){
			a[i][b]=0;
		}
	}
	for(i=0;i<3;i++){
		for(b=0;b<3;b++){
		scanf("%d",&a[i][b]);
		}
	}
	int total;
	total=0;
	for(i=0;i<3;i++){
		for(b=0;b<3;b++){
		if(i==b||i+b==2){
			total+=a[i][b];
		}
		}
	}
	
	printf("%d",total);
	return 0;
}
