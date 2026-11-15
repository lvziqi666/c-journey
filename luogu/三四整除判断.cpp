# include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		if(i%3==0||i%4==0){
			printf("%d ",i);
		}
	}
	return 0;
}
