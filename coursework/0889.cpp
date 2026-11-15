# include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int cnt=0;
	for(int i=0;i<10;i++){
		if(a[i]%3==0||a[i]%4==0){
			printf("%d ",a[i]);
			cnt++;
		}
	}
	printf("\n");
	printf("%d",cnt);
}
