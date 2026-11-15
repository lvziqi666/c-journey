/**/对于一个五位数  
a 
1
​
a 
2
​
a 
3
​
a 
4
​
a 
5
​

​
，可将其拆分为三个子数：

sub 
1
​
= 
a 
1
​
a 
2
​
a 
3
​

​


sub 
2
​
= 
a 
2
​
a 
3
​
a 
4
​

​


sub 
3
​
= 
a 
3
​
a 
4
​
a 
5
​

​


例如，五位数 20207 可以拆分成

sub 
1
​
=202

sub 
2
​
=020 (=20)

sub 
3
​
=207

现在给定一个正整数 K，要求你编程求出 10000 到 30000 之间所有满足下述条件的五位数，条件是这些五位数的三个子数 sub 
1
​
,sub 
2
​
,sub 
3
​
都可被 K 整除。

输入格式
一个正整数 K。

输出格式
每一行为一个满足条件的五位数，要求从小到大输出。不得重复输出或遗漏。如果无解，则输出 No。*/
# include <stdio.h>
int main()
{
	int k;
	int a,b,c;
	int f,d,e;
	int x;
	int z;
a=0;
	b=0;
	c=0;
	
	scanf("%d",&k);
	for(int i=10000;i<=30000;i++){
		e=i%100;
		a=(i-e)/100;
		
		d=i%10;
		x=i%10000;
		b=i-d-x*10000;
		f=i/1000;
		c=i-f*1000;
	if(a%k==0&&b%k==0&&c%k==0){
			printf("%d\n",i);
		printf("%d",b);
		z++;
		}  
	}
	if(z==0){
		printf("No");
	}
	return 0;
}
