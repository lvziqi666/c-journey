# include <stdio.h>
int main()
{
	int a,n;
	scanf("%d%d",&a,&n);
	int m;
	m=a;
	int total=0;
	for(int i=1;i<=n;i++){
		total+=a;
		a=a*10+m;
	} 
	printf("%d",total);
	return 0;
}
