#include<stdio.h>
#include<math.h> 
int main()
{   int a, b;
	scanf("%d", &a);
	if(a<1000&&a>0){
	b=sqrt(a);
		printf("%d",b);
	}
	else printf("输入的数应为小于1000的正数");
}

