# include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b,c,d;
	b=a;
	while(b<=a+3){
         c=a;
		while(c<=a+3){
			d=a;
			while(d<=a+3){
				if(b!=d){
				if(b!=c){
					if(c!=d){
				printf("%d%d%d \n",b,c,d);
					}
					
					}
				}
			d++;
			}
		c++;
		}
				
	b++;
	}
	return 0;
}
