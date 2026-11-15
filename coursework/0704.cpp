# include <stdio.h>
void x(int c[3][3]);
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int b=0;b<3;b++){
			scanf("%d",&a[i][b]);
		}
	}
x(a);
		for(int i=0;i<3;i++){
			for(int b=0;b<3;b++){
				printf("%d ",a[i][b]);
				if(b==2){
					printf("\n");
				}
			}
		}
}
void x(int c[3][3])
{
	int d[3][3];

	for(int i=0;i<3;i++){
		for(int b=0;b<3;b++){
			d[i][b]=c[b][i];
		}
	}
		for(int i=0;i<3;i++){
			for(int b=0;b<3;b++){
				c[i][b]=d[i][b];
			}
		}		
		
}
