# include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b;
for(b=1;b<=a;b++){
while(b%3==0||b%4==0){
	printf("%d ",b);
	b++;
}
}
	return 0;
}
