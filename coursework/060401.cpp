# include <stdio.h>
int main()
{
int	a[6]={5,10,20,30,80,0};
	scanf("%d",&a[5]);
	int swi;
	for(int i=4;i>=0;i--){
		if(a[i+1]<a[i]){
			swi=a[i];
			a[i]=a[i+1];
			a[i+1]=swi;
		}
	}
	for(int i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
	
}
