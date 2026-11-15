#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int i;
	int cot;
	cot=0;
		int c[6];
	for(i=1;i<=n;i++){
	
		int d=0;
		int temp=i;
		while(temp>0){
			
			
			
			c[d]=temp%10;
			temp/=10;
			d++;
		}
		int flag=1;
		for(int f=0;f<d-1;f++){
			if(c[f]<c[f+1]){
			flag=0;	
			}
		}
				if(flag==1) {
					cot++;
				}	
	}

	printf("%d",cot);
	return 0;
}
