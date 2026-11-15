#include <stdio.h>
#include <stdlib.h>

int main()
{
char  a[1000][1000],b[1000][1000];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int l=0;l<m;l++){
			scanf(" %c",&a[i][l]);
		}
	}
	int k;
	scanf("%d",&k);
	for(int c=1;c<=k;c++){
		for(int i=0;i<n;i++){
			for(int l=0;l<m;l++){
			b[i][l]=a[i][l];
			}
		}
		for(int i=0;i<n;i++){
			for(int l=0;l<m;l++){
			if(a[i][l]=='g'){
			if(l-1>=0)	b[i][l-1]='g';
			if(l+1<m)	b[i][l+1]='g';
			if(i-1>=0)	b[i-1][l]='g';
			if(i+1<n)	b[i+1][l]='g';
			}
			}
		}
	for(int i=0;i<n;i++){
		for(int l=0;l<m;l++){
			a[i][l]=b[i][l];
		}
	}
	}
		for(int i=0;i<n;i++){
			for(int l=0;l<m;l++){
				printf("%c",a[i][l]);
			}
			printf("\n");
		}
	
	
	return 0;
}
