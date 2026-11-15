# include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a,b,c;
	int min;
	int max;
	c=0;
	
	min=(m<n)?m:n;
	max=(m>n)?m:n;
	for(a=min;a<=max;a++){
		for(b=2;b<a;b++){
			if(a%b==0){
				break;
			}
			c+=a;
			
		}
	}
	printf("%d",c);
	return 0;	
}
