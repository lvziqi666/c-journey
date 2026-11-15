#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int n;
	scanf("%d",&n);
	int a[10000];
	int cot=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n-1;i++){
		int found=0;
		for(int m=0;m<i;m++){
			for(int x=i+1;x<n;x++){
			if(a[m]<a[i]&&a[i]<a[x]){
				cot++;
				found=1;
				break;
			}	
			}
			if(found) break;
		}
	}
	printf("%d",cot);
	
	return 0;
}
