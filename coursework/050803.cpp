# include <stdio.h>
int main()
{
	int i;
	int a,b,c;
	int cnt;
	cnt=0;
	for(i=100;i<=999;i++){
		c=i%10;
		a=i/100;
		b=(i-a*100-c)/10;
		if(i==a*a*a+b*b*b+c*c*c){
			printf("%d\n",i);
			cnt++;
		}
		if(cnt==2){
			break;
		}
	}
	return 0;
}
