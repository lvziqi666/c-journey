# include <stdio.h>
int signal(int a);
int main()
{
	int m;
	scanf("%d",&m);
	int c[4];
	for(int i=0;i<4;i++){
	c[i]=signal(m);
	m/=10;	
		
	}
	printf("%d %d %d %d",c[3],c[2],c[1],c[0]);
	return 0;
}
int signal(int a){
	
	a=a%10;
	
	
	
	return a;
}
