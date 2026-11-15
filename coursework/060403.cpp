# include <stdio.h>
void x(int b[6],int d);
int main()
{
	int a[6]={5,10,20,30,80};
	int c;
	scanf("%d",&c);
	x(a,c);
	for(int i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
void x(int b[6],int d){

		if(d>b[4]){
			b[5]=d;
		}
		else if(d<b[0]){
			for(int i=4;i>=0;i--){
				b[i+1]=b[i];
			}
			b[0]=d;
		}
	   else 	for(int i=3;i>0;i--){
		if(d>b[i]){
			for(int p=4;p>=i;p--){
				b[p+1]=b[p];
			}
			b[i+1]=d;
			break;
		}
		
		
		
		
	}
	
	
	
}
