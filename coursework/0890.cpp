# include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int total=0;
	float pingjun=0;
	int oushu=0;
	int *p;
	p=a;
	
	for(int i=1;i<=10;i++){
		total+=*p;
		if(*p%2==0){
			oushu++;
		}
		p++;
	}
	pingjun=total/10.0;
	printf("和=%d\n",total);
	printf("平均=%.2f\n",pingjun);
	printf("偶数=%d个\n",oushu);
	return 0;
}
