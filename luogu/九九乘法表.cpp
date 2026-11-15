# include <stdio.h>
int main()
{
	int a,b;
	a=1;
	b=1;
	int c,d;
	while(b<10){
	a=1;
		for(a=1;a<=b;a++){
			if(a!=b){
				c=a*b;
				printf("%d*%d=%d",a,b,c);
				if(c>9){
					printf("  ");	
				}
				else printf("   ");
			}
			else {
				d=a*b;
				printf("%d*%d=%d\n",a,b,d);
				
			}
		}
	b++;
	
	}
	return 0;
}
