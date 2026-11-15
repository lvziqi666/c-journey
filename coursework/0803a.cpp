# include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0];
	int max=a[0];
	int mi=0,ma=0;
	for(int i=0;i<10;i++){
		if(a[i]<min){
			min=a[i];
			
		}
		if(a[i]>max){
			max=a[i];
			
		}
	}
	int *p;
	p=a;
	for(int i=0;i<10;i++){
		if(*p==max){
		
			ma=i;
		}
		if(*p==min){
			
			mi=i;
		}
		p++;
	}
	int temp=a[0];
	

	a[0]=a[mi];
	a[mi]=temp;
	if(ma==0){
		ma=mi;
	}
	temp=a[9];
	a[9]=a[ma];
	a[ma]=temp;
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
