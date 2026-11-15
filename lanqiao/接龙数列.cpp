#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[10000];
	int n;
	scanf("%d",&n);
	int cot=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int p,q;
	for(int i=0;i<n-1;i++){
		p=a[i]%10;
		for(int x=10;;x*=10){
			if(a[i+1]/x==0){
				q=a[i+1];
				break;
			}
			else if((a[i+1]/x)<10){
				q=a[i+1]/x;
				break;
			}
		}
		if(q!=p){
		for(int i=0;i<n-1;i++){
			p=a[i]%10;
			for(int x=10;;x*=10){
				if(a[i+1]/x==0){
					q=a[i+1];
					break;
				}
				else if((a[i+1]/x)<10){
					q=a[i+1]/x;
					break;
				}
			}
			if(q!=p){
				
				cot++;
			}
			
		}
			
		}
	
	}

	
	printf("%d",cot);
	return 0;
}
