# include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int middle;
	middle=(n+1)/2;
	int m=n;
	for(int i=1;i<=middle;i++){
		for(int a=1;a<=middle-i;a++){
			printf(" ");
		}
		for(int b=1;b<=2*i-1;b++){
			printf("*");
		}
		printf("\n");
	}
		for(int i=1;i<=middle;i++){
		
			for(int b=1;b<=i;b++){
				printf(" ");
			}
				for(int a=1;a<=m-2;a++){
					printf("*");
				}
			m-=2;
			printf("\n");
		}
}
