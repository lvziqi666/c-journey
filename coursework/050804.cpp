# include <stdio.h>
int main()
{
	int a,b,c;
	int x;
	int cnt;
	cnt=0;
	for(a=1;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
				x=a*100+b*10+c;
				if(x==a*a*a+b*b*b+c*c*c){
					printf("%d\n",x);
					cnt++;
					if(cnt==3){
						break;
					}
					
				}
			}
			if(cnt==3){
				break;
			}
			
		}
		if(cnt==3){
			break;
		}
		
	}
	return 0;
}
