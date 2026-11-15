# include <stdio.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int *p=a;
	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*p=%d\n",*p);
	printf("*(p+1)=%d\n",*(p+1));
	
	char b[10]={0,1,2,3,4,5,6,7,8,9};
	char *q=b;
	printf("q=%p\n",q);
	printf("q+1=%p\n",q+1);
	printf("*q=%d\n",*q);
	printf("*(q+1)=%d\n",*(q+1));

}
