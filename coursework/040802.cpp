# include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<0||a>100){
		printf("错误");
	}
	int b;
	b=a/10;
	switch(b){
		case 10:
		case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
		case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("E");
		break;
		
	}
	return 0;
}
