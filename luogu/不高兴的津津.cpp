# include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	int max;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n);
	if(a+b<=8&&c+d<=8&&e+f<=8&&g+h<=8&&i+j<=8&&k+l<=8&&m+n<=8){
		printf("0");
	}
	else{
		max=(a+b>c+d)?a+b:c+d;
		max=(max>e+f)?max:e+f;
		max=(max>g+h)?max:g+h;
		max=(max>i+j)?max:i+j;
		max=(max>k+l)?max:k+l;
		max=(max>m+n)?max:m+n;
		if(max==a+b){
			printf("1");
		}
		if(max==c+d){
			printf("2");
		}
		if(max==e+f){
			printf("3");
		}
		if(max==g+h){
			printf("4");
			
	}
		if(max==i+j){
			printf("5");
		}
		if(max==k+l){
			printf("6");
		}
		if(max==m+n){
			printf("7");
	}
	}
	return 0;
}
