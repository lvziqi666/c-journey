# include <stdio.h>
int main()
{
	float a[10];
	for(int i=0;i<10;i++){
		scanf("%f",&a[i]);
	}
	float min,max;
	min=a[0];
	max=a[0];
	int minn=0,maxn=0;
	for(int i=0;i<10;i++){
		if(a[i]<min){
			min=a[i];
			minn=i;
		}
		if(a[i]>max){
			max=a[i];
			maxn=i;
		}
	}
	printf("最大值=%.1f 其下标=%d\n",max,maxn);
	printf("最小值=%.1f 其下标=%d\n",min,minn);
	return 0;
}
