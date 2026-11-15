# include <stdio.h>
int main()
{
	int a[10];
	int b[10];
		int *p;
	int *q;
	
	p=a;
	q=b;

	for(int i=0;i<10;i++){
		scanf("%d",p);
		p++;
	}

	int m;
	scanf("%d",&m);
		q=b+m;
		p=a;
	for(int i=0;i<10-m;i++){
		*q=*p;
		p++;
		q++;
	}
	q=b;
	for(int i=0;i<m;i++){
		*q=*p;
		p++;
		q++;
	}
	p=a;
	q=b;
	for(int i=0;i<10;i++){
		*p=*q;
		p++;
		q++;
	}
	p=a;
	for(int i=0;i<10;i++){
		printf("%d ",*p);
		p++;
	}
	
	
	
	
	
	
}
