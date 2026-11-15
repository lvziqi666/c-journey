# include <stdio.h>
int p(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int m;
	m=p(n);
	if(m==1){
		printf("%d不是素数",n);
	}
	else printf("%d是素数",n);
	return 0;
	
}
int p(int n){
	int i;
	int cot;
cot=0;
	if(n==1) cot=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			cot=1;
			break;
		}
		else 	cot=0;
	}
return cot;
}
